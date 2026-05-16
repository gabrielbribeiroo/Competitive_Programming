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

struct BIT {
  int n;
  vector<ll> t;

  BIT(int n) : n(n) { t.assign(n + 1, 0); }
  BIT(vector<ll> const &a) {
    n = a.size();
    t.assign(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
      t[i] += a[i - 1];
      int j = i + (i & -i);
      if (j <= n)
        t[j] += t[i];
    }
  }

  ll query(int i) {
    ll ret = 0;
    for (++i; i > 0; i -= i & -i)
      ret += t[i];
    return ret;
  }

  void update(int i, ll add) {
    for (++i; i <= n; i += i & -i)
      t[i] += add;
  }
  void update(int l, int r, ll add) {
    update(l, add);
    update(r + 1, -add);
  }
};

int main() {
  _ int T;
  cin >> T;

  for (int tc = 1; tc <= T; tc++) {
    int n, q;
    cin >> n >> q;

    vector<ll> A(n);
    for (int i = 0; i < n; i++)
      cin >> A[i];

    BIT bit(A);

    cout << "Case " << tc << ":" << endl;

    while (q--) {
      int op;
      cin >> op;

      if (op == 1) {
        int i;
        cin >> i;
        cout << A[i] << endl;
        bit.update(i, -A[i]);
        A[i] = 0;
      } else if (op == 2) {
        int i;
        ll v;
        cin >> i >> v;
        bit.update(i, v);
        A[i] += v;
      } else {
        int i, j;
        cin >> i >> j;
        cout << bit.query(j) - (i > 0 ? bit.query(i - 1) : 0) << endl;
      }
    }
  }
}
