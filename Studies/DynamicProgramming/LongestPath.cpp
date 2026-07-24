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

const int MAXN = 1e5 + 5;
vector<int> adj[MAXN];
int memo[MAXN];

int get_longest_path(int u) {
  if (memo[u] != -1)
    return memo[u];
  int max_len = 0;
  for (int v : adj[u]) {
    max_len = max(max_len, 1 + get_longest_path(v));
  }
  return memo[u] = max_len;
}

void solve() {
  int n, m;
  if (!(cin >> n >> m))
    return;

  for (int i = 1; i <= n; i++) {
    adj[i].clear();
    memo[i] = -1;
  }

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    adj[u].pb(v);
  }

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    ans = max(ans, get_longest_path(i));
  }

  cout << ans << endl;
}

int main() {
  _ 
  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}