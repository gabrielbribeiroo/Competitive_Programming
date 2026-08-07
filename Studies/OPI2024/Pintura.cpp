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
const int MOD = 998244353;

// OPI 2024 - Problema J: Pintura (Codeforces 1051D)
// DP: dp[i][j][mask] = maneiras de colorir as i primeiras colunas
// com j componentes conectados no total e a i-ésima coluna com o estado `mask`.
// Estados das colunas:
// 0: (W, W)
// 1: (W, B)
// 2: (B, W)
// 3: (B, B)

int dp[1005][2005][4];

int delta[4][4] = {
    {0, 1, 1, 1}, // 0 (WW) -> 0(0), 1(1), 2(1), 3(1)
    {0, 0, 2, 0}, // 1 (WB) -> 0(0), 1(0), 2(2), 3(0)
    {0, 2, 0, 0}, // 2 (BW) -> 0(0), 1(2), 2(0), 3(0)
    {1, 1, 1, 0}  // 3 (BB) -> 0(1), 1(1), 2(1), 3(0)
};

int main() {
  _ int n, k;
  if (!(cin >> n >> k))
    return 0;

  // Caso base i = 1
  dp[1][1][0] = 1; // (W, W) -> 1 componente
  dp[1][2][1] = 1; // (W, B) -> 2 componentes
  dp[1][2][2] = 1; // (B, W) -> 2 componentes
  dp[1][1][3] = 1; // (B, B) -> 1 componente

  for (int i = 2; i <= n; i++) {
    for (int j = 1; j <= 2 * n; j++) {
      for (int prev = 0; prev < 4; prev++) {
        if (dp[i - 1][j][prev] == 0)
          continue;
        for (int cur = 0; cur < 4; cur++) {
          int nj = j + delta[prev][cur];
          if (nj <= 2 * n) {
            dp[i][nj][cur] = (dp[i][nj][cur] + dp[i - 1][j][prev]) % MOD;
          }
        }
      }
    }
  }

  int ans = 0;
  for (int mask = 0; mask < 4; mask++) {
    ans = (ans + dp[n][k][mask]) % MOD;
  }

  cout << ans << endl;

  return 0;
}
