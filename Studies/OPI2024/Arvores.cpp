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

// OPI 2024 - Problema I: Árvores (Codeforces 862B - Mahmoud and Ehab and the bipartiteness)
// Biparticiona a árvore usando BFS/DFS em 2 conjuntos (cor 0 e cor 1).
// Resposta = (tamanho_conjunto_0 * tamanho_conjunto_1) - (n - 1)

int main() {
    _
    int n;
    if (!(cin >> n)) return 0;

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    vector<int> color(n + 1, -1);
    ll count0 = 0, count1 = 0;

    queue<int> q;
    q.push(1);
    color[1] = 0;
    count0++;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (color[v] == -1) {
                color[v] = 1 - color[u];
                if (color[v] == 0) count0++;
                else count1++;
                q.push(v);
            }
        }
    }

    ll ans = (count0 * count1) - (n - 1);
    cout << ans << endl;

    return 0;
}
