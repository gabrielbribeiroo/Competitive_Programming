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

// OPI 2024 - Problema F: Competição (Codeforces 535E - Tavas and Pashmaks)
// Encontra todos os competidores que podem vencer para algum valor de S > 0 e R > 0.
// Utiliza envoltória convexa (Convex Hull / Lower Envelope) com aritmética exata de 128-bit.

struct Competitor {
    ll s, r;
    int id;
};

// Retorna true se P2 é redundante entre P1 e P3
bool is_redundant(const Competitor &P1, const Competitor &P2, const Competitor &P3) {
    // Vetores no plano (1/s, 1/r):
    // P2 é redundante se estiver acima do segmento P1-P3 (produto cruzado > 0)
    // lhs = (r1 - r2) * s1 * (s3 - s2)
    // rhs = (r2 - r3) * r1 * (s2 - s1)
#ifdef __SIZEOF_INT128__
    __int128 lhs = (__int128)(P1.r - P2.r) * P1.s * (P3.s - P2.s);
    __int128 rhs = (__int128)(P2.r - P3.r) * P1.r * (P2.s - P1.s);
    return lhs > rhs;
#else
    long double lhs = (long double)(P1.r - P2.r) * P1.s * (P3.s - P2.s);
    long double rhs = (long double)(P2.r - P3.r) * P1.r * (P2.s - P1.s);
    return lhs > rhs + 1e-11;
#endif
}

int main() {
    _
    int n;
    if (!(cin >> n)) return 0;

    vector<Competitor> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i].s >> vec[i].r;
        vec[i].id = i + 1;
    }

    // Ordena por s crescente, r decrescente
    sort(all(vec), [](const Competitor &a, const Competitor &b) {
        if (a.s != b.s) return a.s < b.s;
        return a.r > b.r;
    });

    // Filtra duplicados mantendo o primeiro de cada par (s, r) igual
    vector<Competitor> unique_comps;
    map<pair<ll, ll>, vector<int>> same_pair;

    for (int i = 0; i < n; i++) {
        same_pair[{vec[i].s, vec[i].r}].pb(vec[i].id);
        if (i == 0 || vec[i].s != vec[i - 1].s || vec[i].r != vec[i - 1].r) {
            unique_comps.pb(vec[i]);
        }
    }

    // Elimina competidores dominados (s_j >= s_i e r_j >= r_i)
    vector<Competitor> non_dominated;
    ll max_r = 0;
    for (int i = (int)unique_comps.size() - 1; i >= 0; i--) {
        if (unique_comps[i].r >= max_r) {
            non_dominated.pb(unique_comps[i]);
            max_r = unique_comps[i].r;
        }
    }
    reverse(all(non_dominated));

    // Constrói a Envoltória Convexa (Monotone Stack)
    vector<Competitor> hull;
    for (const auto &p : non_dominated) {
        while (hull.size() >= 2 && is_redundant(hull[hull.size() - 2], hull.back(), p)) {
            hull.pop_back();
        }
        hull.pb(p);
    }

    // Coleta todos os IDs dos competidores vencedores
    set<int> winner_ids;
    for (const auto &p : hull) {
        for (int id : same_pair[{p.s, p.r}]) {
            winner_ids.insert(id);
        }
    }

    // Imprime em ordem crescente
    bool first = true;
    for (int id : winner_ids) {
        if (!first) cout << " ";
        cout << id;
        first = false;
    }
    cout << endl;

    return 0;
}
