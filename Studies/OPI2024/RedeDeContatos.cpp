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

// OPI 2024 - Problema F: Rede de Contatos (Componentes Conexos)
// Determina o número de grupos/redes de contatos independentes em um grafo não direcionado

struct DSU {
    int n;
    vector<int> parent, sz;

    DSU(int n) : n(n) {
        parent.resize(n + 1);
        iota(all(parent), 0);
        sz.assign(n + 1, 1);
    }

    int find(int i) {
        if (parent[i] == i) return i;
        return parent[i] = find(parent[i]);
    }

    bool unite(int i, int j) {
        int root_i = find(i);
        int root_j = find(j);
        if (root_i != root_j) {
            if (sz[root_i] < sz[root_j]) swap(root_i, root_j);
            parent[root_j] = root_i;
            sz[root_i] += sz[root_j];
            return true;
        }
        return false;
    }
};

int main() {
    _
    int n, m;
    if (!(cin >> n >> m)) return 0;

    DSU dsu(n);
    int componentes = n;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        if (dsu.unite(u, v)) {
            componentes--;
        }
    }

    cout << componentes << endl;

    return 0;
}
