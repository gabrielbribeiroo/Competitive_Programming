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

// OPI 2024 - Problema E: Maior Subsequência Estritamente Crescente (LIS)
// Determina o tamanho da maior subsequência estritamente crescente em O(N log N)

int main() {
    _
    int n;
    if (!(cin >> n)) return 0;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<ll> lis;
    for (int i = 0; i < n; i++) {
        auto it = lower_bound(all(lis), a[i]);
        if (it == lis.end()) {
            lis.pb(a[i]);
        } else {
            *it = a[i];
        }
    }

    cout << lis.size() << endl;

    return 0;
}
