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

int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }

template <typename T> struct SparseTable {
  vector<vector<T>> st;
  int n, k;

  T op(T a, T b) { return gcd(a, b); }

  SparseTable() {}

  SparseTable(const vector<T> &vec) {
    n = vec.size();
    if (n == 0)
      return;
    k = __lg(n) + 1;
    st.assign(k + 1, vector<T>(n));
    for (int j = 0; j < n; j++)
      st[0][j] = vec[j];
    for (int i = 1; i <= k; i++)
      for (int j = 0; j + (1 << i) <= n; j++)
        st[i][j] = op(st[i - 1][j], st[i - 1][j + (1 << (i - 1))]);
  }

  T query(int l, int r) {
    if (l > r)
      return 0;
    int i = __lg(r - l + 1);
    return op(st[i][l], st[i][r - (1 << i) + 1]);
  }
};

void solve() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  if (n == 1) {
    for (int i = 0; i < q; i++) {
      int l, r;
      cin >> l >> r;
      cout << 0 << " ";
    }
    cout << endl;
    return;
  }
  vector<int> d(n - 1);
  for (int i = 0; i < n - 1; i++) {
    d[i] = abs(a[i + 1] - a[i]);
  }
  SparseTable<int> st(d);
  for (int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    l--;
    r--; // converting to 0-based
    if (l == r) {
      cout << 0 << " ";
    } else {
      cout << st.query(l, r - 1) << " ";
    }
  }
  cout << endl;
}

int main() {
  int t;
  if (cin >> t) {
    while (t--) {
      solve();
    }
  }
  return 0;
}
