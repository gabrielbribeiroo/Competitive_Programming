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

struct Offset {
  int dr, dc;
  int dist;
};

void solve() {
  int h, w;
  if (!(cin >> h >> w)) return;

  vector<string> grid(h);
  for (int i = 0; i < h; i++) {
    cin >> grid[i];
  }

  int start_r, start_c, end_r, end_c;
  cin >> start_r >> start_c >> end_r >> end_c;
  start_r--; start_c--; end_r--; end_c--;

  vector<vector<int>> dist(h, vector<int>(w, INF));
  vector<vector<bool>> vis(h, vector<bool>(w, false));

  vector<Offset> offsets;
  for (int r = -3; r <= 3; r++) {
    for (int c = -3; c <= 3; c++) {
      int d = abs(r) + abs(c);
      if (d > 0 && d <= 3) {
        offsets.push_back({r, c, d});
      }
    }
  }

  dist[start_r][start_c] = 0;
  deque<pair<int, int>> dq;
  dq.push_front({start_r, start_c});

  int adj_dr[] = {1, -1, 0, 0};
  int adj_dc[] = {0, 0, 1, -1};

  while (!dq.empty()) {
    auto curr = dq.front();
    dq.pop_front();
    int u = curr.first;
    int v = curr.second;

    if (vis[u][v]) continue;
    vis[u][v] = true;

    if (u == end_r && v == end_c) break;

    // 0-cost transitions: normal moves to adjacent road cells
    for (int i = 0; i < 4; i++) {
      int nu = u + adj_dr[i];
      int nv = v + adj_dc[i];
      if (nu >= 0 && nu < h && nv >= 0 && nv < w) {
        if (grid[nu][nv] == '.') {
          if (dist[u][v] < dist[nu][nv]) {
            dist[nu][nv] = dist[u][v];
            dq.push_front({nu, nv});
          }
        }
      }
    }

    // 1-cost transitions: front kicks
    for (const auto& opt : offsets) {
      int nu = u + opt.dr;
      int nv = v + opt.dc;
      if (nu >= 0 && nu < h && nv >= 0 && nv < w) {
        bool is_reachable = false;
        if (grid[nu][nv] == '#') {
          if ((opt.dr == 0 || opt.dc == 0) && opt.dist <= 2) {
            is_reachable = true;
          }
        } else {
          is_reachable = true;
        }

        if (is_reachable) {
          if (dist[u][v] + 1 < dist[nu][nv]) {
            dist[nu][nv] = dist[u][v] + 1;
            dq.push_back({nu, nv});
          }
        }
      }
    }
  }

  cout << dist[end_r][end_c] << endl;
}

int main() {
  _
  solve();
  return 0;
}