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
  _ int n, q;
  cin >> n >> q;

  vector<long long> A(n);

  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  BIT bit(A);

  while (q--) {
    int op;
    cin >> op;

    if (op == 1) {
      int k, u;
      cin >> k >> u;
      k--;
      bit.update(k, u - A[k]);
      A[k] = u;
    }

    else {
      int l, r;
      cin >> l >> r;
      l--;
      r--;
      cout << bit.query(r) - (l > 0 ? bit.query(l - 1) : 0) << endl;
    }
  }
}