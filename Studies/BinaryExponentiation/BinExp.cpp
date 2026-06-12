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

// a ^ b = ans (mod m)
int binpow(int a, int b, int m) {
  int ret = 1;
  while (b) {
    // b % 2 == 1
    if (b & 1)
      ret = 1ll * ret * a % m;
    a = 1ll * a * a % m;
    b /= 2;
  }

  return ret;
}

int main() {
  int a, b, m;
  cin >> a >> b >> m;
  cout << binpow(a, b, m) << endl;
  return 0;
}