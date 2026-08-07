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

// OPI 2024 - Problema D: Jogo (Leha e o Jogo)
// Se existir pelo menos um número ímpar no vetor, o Primeiro jogador ("First") vence.
// Caso contrário (todos os números são pares), o Segundo jogador ("Second") vence.

int main() {
    _
    int n;
    if (!(cin >> n)) return 0;

    bool tem_impar = false;
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        if (x % 2 != 0) {
            tem_impar = true;
        }
    }

    if (tem_impar) {
        cout << "First" << endl;
    } else {
        cout << "Second" << endl;
    }

    return 0;
}
