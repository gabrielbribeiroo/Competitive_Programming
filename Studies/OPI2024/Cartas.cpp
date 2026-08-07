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

// Comparador para ordenação de concatenação
bool cmp(const string &a, const string &b) {
    return a + b > b + a;
}

// Compara qual número gerado é maior (primeiro por quantidade de dígitos, depois lexicograficamente)
bool is_better(const string &a, const string &b) {
    if (a.length() != b.length()) {
        return a.length() > b.length();
    }
    return a > b;
}

int main() {
    _
    int n;
    if (!(cin >> n)) return 0;

    // Agrupa cartas por quantidade de dígitos (comprimento da string)
    vector<string> buckets[7];
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s.length() <= 6) {
            buckets[s.length()].pb(s);
        }
    }

    // Para cada tamanho de 1 a 6 dígitos, ordena e seleciona no máximo as 3 melhores cartas
    vector<string> candidates;
    for (int len = 1; len <= 6; len++) {
        sort(all(buckets[len]), cmp);
        int take = min((int)buckets[len].size(), 3);
        for (int i = 0; i < take; i++) {
            candidates.pb(buckets[len][i]);
        }
    }

    // Testa todas as combinações de 3 cartas distintas entre os candidatos selecionados
    string ans = "";
    int sz = candidates.size();

    for (int i = 0; i < sz; i++) {
        for (int j = 0; j < sz; j++) {
            if (i == j) continue;
            for (int k = 0; k < sz; k++) {
                if (k == i || k == j) continue;
                string cand = candidates[i] + candidates[j] + candidates[k];
                if (ans == "" || is_better(cand, ans)) {
                    ans = cand;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}
