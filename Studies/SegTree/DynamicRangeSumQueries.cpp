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

struct Node {
    ll val;
    Node() { val = 0; }
    Node(ll v) : val(v) {}
    Node operator +(const Node &rhs) const{
        return Node(val + rhs.val);   
    }
};

struct Segtree {
    int n;      
    vector<ll> a;
    vector<Node> t;

    Segtree(int n_) :n(n_) {
        t.assign(2*n_, Node());
    };

    Segtree(vector<ll> &vec) {
        a = vec;
        n = vec.size();
        t.assign(2 * n, Node());
        build(1, 0, n - 1);
    }

    void build(int pos, int l, int r) {
        if (l == r) {
            t[pos] = Node(a[l]);
            return;
        }
        int m = (l + r) / 2;
        build(2 * pos, l, m);
        build(2 * pos + 1, m + 1, r);
        t[pos] = t[2 * pos] + t[2 * pos + 1];
    }

    void update(int pos, int idx, int l, int r, ll new_val) {
        if (l == r) {
            t[pos] = Node(new_val);
            return;
        }
        int m = (l + r) / 2;
        if (idx <= m) update(2 * pos, idx, l, m, new_val);
        else update(2 * pos + 1, idx, m + 1, r, new_val);
        t[pos] = t[2 * pos] + t[2 * pos + 1];
    }

    void update(int idx, ll new_val) {
        update(1, idx, 0, n - 1, new_val);
    }

    Node query(int pos, int l, int r, int tl, int tr) {
        if (l > tr || r < tl) return Node();
        if (l <= tl && tr <= r) return t[pos];
        int m = (tl + tr) / 2;
        return query(2 * pos, l, r, tl, m) + query(2 * pos + 1, l, r, m + 1, tr);
    }

    Node query(int l, int r) {
        return query(1, l, r, 0, n - 1);
    }
};

int main() {
    _
    int n, q;
    if (!(cin >> n >> q)) return 0;

    vector<ll> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    Segtree seg(vec);

    for (int i = 0; i < q; i++) {
        int type;
        cin >> type;
        if (type == 1) {
            int k;
            ll u;
            cin >> k >> u;
            seg.update(k - 1, u);
        } else {
            int a, b;
            cin >> a >> b;
            cout << seg.query(a - 1, b - 1).val << endl;
        }
    }

    return 0;
}