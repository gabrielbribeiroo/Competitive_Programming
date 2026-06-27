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
  cin >> n >> m;

  vector<string> arr(n);
  for (auto &i : arr)
    cin >> i;

  int dx[4] = {0, -1, 1, 0};
  int dy[4] = {1, 0, 0, -1};

  auto isValid = [&](int x, int y) -> bool {
    return (0 <= x && x < n && 0 <= y && y < m);
  };

  vector<vector<int>> dist(n, vector<int>(m, INF));
  dist[0][0] = 0;
  vector<vector<bool>> vis(n, vector<bool>(m, false));

  deque<pair<int, int>> dq;
  dq.push_front({0, 0});
  while (!dq.empty()) {
    auto curr = dq.front();
    dq.pop_front();
    int u = curr.first;
    int v = curr.second;
    if (vis[u][v]) continue;
    vis[u][v] = true;
    for (int i = 0; i < 4; i++) {
      int cx = u + dx[i];
      int cy = v + dy[i];
      if (isValid(cx, cy)) {
        bool ok = true;
        if (arr[u][v] != arr[cx][cy])
          ok = false;
        if (dist[u][v] + !ok < dist[cx][cy]) {
          dist[cx][cy] = dist[u][v] + !ok;
          if (!ok) {
            dq.push_back({cx, cy});
          } else {
            dq.push_front({cx, cy});
          }
        }
      }
    }
  }

  cout << dist[n - 1][m - 1] << endl;
}

int main() {
  _
  int t;
  if (cin >> t) {
    while (t--) {
      solve();
    }
  }
  return 0;
}