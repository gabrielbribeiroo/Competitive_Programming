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

const int MAXK = 1e5 + 5;
int memo[MAXK];
vector<int> a;

bool can_win(int stones) {
  if (memo[stones] != -1)
    return memo[stones];

  for (int x : a) {
    if (stones >= x && !can_win(stones - x)) {
      return memo[stones] = 1;
    }
  }

  return memo[stones] = 0;
}

void solve() {
  int n, k;
  if (!(cin >> n >> k))
    return;

  a.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i <= k; i++) {
    memo[i] = -1;
  }

  if (can_win(k)) {
    cout << "First" << endl;
  } else {
    cout << "Second" << endl;
  }
}

int main() {
  _ 
  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
