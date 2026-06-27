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
  int n, m;
  if (!(cin >> n >> m)) return;

  vector<vector<pair<int, ll>>> adj(n + 1);
  for (int i = 0; i < m; i++) {
    int u, v;
    ll w;
    cin >> u >> v >> w;
    adj[u].push_back({v, w});
  }

  vector<ll> dist(n + 1, LINF);
  vector<bool> vis(n + 1, false);

  priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;

  dist[1] = 0;
  pq.push({0, 1});

  while (!pq.empty()) {
    auto curr = pq.top();
    pq.pop();

    ll d = curr.first;
    int u = curr.second;

    if (vis[u]) continue;
    vis[u] = true;

    for (auto &edge : adj[u]) {
      int v = edge.first;
      ll w = edge.second;

      if (dist[u] + w < dist[v]) {
        dist[v] = dist[u] + w;
        pq.push({dist[v], v});
      }
    }
  }

  for (int i = 1; i <= n; i++) {
    cout << dist[i] << (i == n ? "" : " ");
  }
  cout << endl;
}

int main() {
  _
  solve();
  return 0;
}
