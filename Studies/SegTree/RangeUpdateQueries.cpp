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
    vector<ll> lazy;

    Segtree(int n_) :n(n_) {
        t.assign(2 * n_, Node());
        lazy.assign(2 * n_, 0);
    };

    Segtree(vector<ll> &vec) {
        a = vec;
        n = vec.size();
        t.assign(2 * n, Node());
        lazy.assign(2 * n, 0);
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

    void apply(int pos, int tl, int tr, int add) {
        t[pos].val += (tr - tl + 1) * add;
        lazy[pos] += add;
    }

    void push(int pos, int tl, int tr) {
        if (lazy[pos] != 0) {
            int m = (tl + tr) / 2;
            apply(2 * pos, tl, m, lazy[pos]);
            apply(2 * pos + 1, m + 1, tr, lazy[pos]);
            lazy[pos] = 0;
        }
    }

    void update(int pos, int tl, int tr, int l, int r, ll add) {
        if (l > tr || r < tl) return;
        push(pos, tl, tr);
        if (l <= tl && tr <= r) {
            apply(pos, tl, tr, add);
            return;
        }      
        int m = (tl + tr) / 2;
        update(2 * pos, tl, m, l, r, add);
        update(2 * pos + 1, m + 1, tr, l, r, add);
        t[pos] = t[2 * pos] + t[2 * pos + 1];
    }

    void update(int l, int r, ll add) {
        update(1, 0, n - 1, l, r, add);
    }

    Node query(int pos, int tl, int tr, int l, int r) {
        if (l > tr || r < tl) return Node();
        if (l <= tl && tr <= r) return t[pos];
        push(pos, tl, tr);
        int m = (tl + tr) / 2;
        return query(2 * pos, tl, m, l, min(r, m)) + query(2 * pos + 1, m + 1, tr, max(l, m + 1), r);
    }

    Node query(int l, int r) {
        return query(1, 0, n - 1, l, r);
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
            int a, b;
            ll u;
            cin >> a >> b >> u;
            seg.update(a - 1, b - 1, u);
        } else {
            int k;
            cin >> k;
            cout << seg.query(k - 1, k - 1).val << endl;
        }
    }

    return 0;
}