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

inline ll mul_mod(ll a, ll b, ll m) {
#ifdef __SIZEOF_INT128__
    return (ll)((__int128)a * b % m);
#else
    ll res = 0;
    a %= m;
    while (b > 0) {
        if (b & 1) res = (res + a) % m;
        a = (a + a) % m;
        b >>= 1;
    }
    return res;
#endif
}

ll modpow(ll base, ll exp, ll mod) {
    ll res = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
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

    // Pré-calcula a inversa de 'a' mod p UMA ÚNICA VEZ antes do loop
    ll a_inv = modInverse(a, p);
    ll p_minus_1_sq = mul_mod(p - 1, p - 1, P);

    ll inv_val = 1; // (a^0)^(-1) mod p = 1
    for (ll r = 0; r < p - 1; r++) {
        // v = b * (a^r)^(-1) mod p
        ll v = (b * inv_val) % p;

        // CRT para encontrar n modulo P = p * (p - 1):
        // n ≡ r (mod p - 1)
        // n ≡ v (mod p)
        ll term1 = mul_mod(r, p, P);
        ll term2 = mul_mod(v, p_minus_1_sq, P);
        ll Nr = (term1 + term2) % P;

        if (Nr == 0) Nr = P;

        if (x >= Nr) {
            ans += (x - Nr) / P + 1;
        }

        // Atualiza inv_val = (a^(r+1))^(-1) mod p em O(1)
        inv_val = (inv_val * a_inv) % p;
    }

    cout << ans << endl;

    return 0;
}
