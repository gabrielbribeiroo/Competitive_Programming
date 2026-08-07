#include <bits/stdc++.h>
#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;
typedef unsigned long long llu;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

// OPI 2024 - Problema E: Equação (Codeforces 1182E / 1182D - Equation)
// Encontra a quantidade de inteiros 1 <= n <= x que satisfazem:
// n * a^n ≡ b (mod p) usando o Teorema Chinês do Resto (CRT).

ll mul_mod(ll a, ll b, ll m) {
    ll res = 0;
    a %= m;
    while (b > 0) {
        if (b & 1) res = (res + a) % m;
        a = (a + a) % m;
        b >>= 1;
    }
    return res;
}

ll modpow(ll base, ll exp, ll mod) {
    ll res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) res = mul_mod(res, base, mod);
        base = mul_mod(base, base, mod);
        exp /= 2;
    }
    return res;
}

ll modInverse(ll n, ll m) {
    return modpow(n, m - 2, m);
}

int main() {
    _
    ll a, b, p, x;
    if (!(cin >> a >> b >> p >> x)) return 0;

    ll P = p * (p - 1);
    ll ans = 0;

    ll cur_a = 1;
    for (ll r = 0; r < p - 1; r++) {
        // a^r mod p
        ll val = cur_a;
        cur_a = (cur_a * a) % p;

        // v = b * (a^r)^(-1) mod p
        ll inv_val = modInverse(val, p);
        ll v = (b * inv_val) % p;

        // CRT para encontrar n modulo P = p * (p - 1):
        // n ≡ r (mod p - 1)
        // n ≡ v (mod p)
        // Solução: N_r = (r * p + v * (p - 1)^2) mod P
        ll term1 = mul_mod(r, p, P);
        ll p_minus_1_sq = mul_mod(p - 1, p - 1, P);
        ll term2 = mul_mod(v, p_minus_1_sq, P);
        ll Nr = (term1 + term2) % P;

        if (Nr == 0) Nr = P;

        if (x >= Nr) {
            ans += (x - Nr) / P + 1;
        }
    }

    cout << ans << endl;

    return 0;
}
