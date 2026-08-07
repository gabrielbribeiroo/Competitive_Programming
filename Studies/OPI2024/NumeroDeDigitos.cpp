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

void solve() {
    ll n, k;
    if (!(cin >> n >> k)) return;

    if (n == 0) {
        cout << 1 << endl;
        return;
    }

    ll digitos = 0;
    while (n > 0) {
        digitos++;
        n /= k;
    }

    cout << digitos << endl;
}

int main() {
    _
    solve();
    return 0;
}
