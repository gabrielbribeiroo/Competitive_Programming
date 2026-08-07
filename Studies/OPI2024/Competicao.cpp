#include <bits/stdc++.h>
#define _                                                                      \
  ios_base::sync_with_stdio(0);                                                \
  cin.tie(0);
#define endl '\n'
#define pb push_back
#define all(x) (x).begin(), (x).end()

using namespace std;

typedef long long ll;

// OPI 2024 - Problema F: Competição (Codeforces 535E - Tavas and Pashmaks)
// Encontra todos os competidores que podem vencer para algum valor de S > 0 e R > 0.
// Utiliza envoltória convexa (Convex Hull / Lower Envelope) no plano (1/s, 1/r).

struct Competitor {
    ll s, r;
    int id;
};

// Retorna true se P2 é redundante entre P1 e P3 na envoltória inferior
bool is_redundant(const Competitor &P1, const Competitor &P2, const Competitor &P3) {
    // P1, P2, P3 estão ordenados com s1 > s2 > s3 e r1 < r2 < r3
    // Todos os termos de diferença são estritamente positivos (<= 10^4), produto máximo 10^16 < ULLONG_MAX
    unsigned long long lhs = (unsigned long long)(P2.r - P1.r) * (P2.s - P3.s) * P1.s * P3.r;
    unsigned long long rhs = (unsigned long long)(P1.s - P2.s) * (P3.r - P2.r) * P1.r * P3.s;
    return lhs <= rhs;
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

    // Ordena por s decrescente, r crescente
    sort(all(vec), [](const Competitor &a, const Competitor &b) {
        if (a.s != b.s) return a.s > b.s;
        return a.r < b.r;
    });

    // Mapeia IDs para cada par único (s, r)
    map<pair<ll, ll>, vector<int>> same_pair;
    vector<Competitor> unique_comps;

    for (int i = 0; i < n; i++) {
        same_pair[{vec[i].s, vec[i].r}].pb(vec[i].id);
        if (i == 0 || vec[i].s != vec[i - 1].s || vec[i].r != vec[i - 1].r) {
            unique_comps.pb(vec[i]);
        }
    }

    // Filtra competidores dominados (s_j >= s_i e r_j >= r_i)
    // Como s é decrescente, mantemos apenas r estritamente crescente
    vector<Competitor> non_dominated;
    ll max_r = 0;
    for (const auto &p : unique_comps) {
        if (p.r > max_r) {
            non_dominated.pb(p);
            max_r = p.r;
        }
    }

    // Constrói a envoltória inferior (Monotone Stack)
    vector<Competitor> hull;
    for (const auto &p : non_dominated) {
        while (hull.size() >= 2 && is_redundant(hull[hull.size() - 2], hull.back(), p)) {
            hull.pop_back();
        }
        hull.pb(p);
    }

    // Coleta IDs de todos os vencedores
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
