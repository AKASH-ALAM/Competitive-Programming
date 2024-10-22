#define left    (idx << 1) // (idx * 2)
#define right   (idx << 1 | 1) // (idx * 2 + 1)
#define mid     ((lo + hi) >> 1) // ((lo + hi) / 2)
const int lim = 2e5 + 5;

ll input[lim];
pair <ll, ll> tree[4 * lim];

/// build  in O( n )
void buildTree(int node, int lo, int hi) {
    if (lo == hi) {
        tree[node].second = input[lo];
        tree[node].first = 0;
        return;
    }
    buildTree(left, lo, mid), buildTree(right, mid + 1, hi);
    tree[node].second = tree[left].second + tree[right].second;
}
/// range update in O(logn)
void update(int node, int lo, int hi, int i, int j, ll val) {
    if (i > hi || j < lo) return;
    else if (i <= lo && hi <= j) {
        tree[node].second += (hi - lo + 1) * val;
        tree[node].first += val;
        return;
    }
    update(left, lo, mid, i, j, val), update(right, mid + 1, hi, i, j, val);
    tree[node].second = (tree[left].second + tree[right].second) + (hi - lo + 1) * tree[node].first;
}
/// query in O(logn)
ll query(int node, int lo, int hi, int i, int j, ll carry = 0) {
    if (lo > j || hi < i) return 0;
    else if (i <= lo && hi <= j) {
        return tree[node].second + carry * (hi - lo + 1);
    }
    ll leftQuery = query(left, lo, mid, i, j, carry + tree[node].first);
    ll rightQuery = query(right, mid + 1, hi, i, j, carry + tree[node].first);
    return leftQuery + rightQuery;
}

void solve() {
    ll n, q;    cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> input[i];
    buildTree(1, 1, n);
    while (q--) {
        ll x;   cin >> x;
        if (x == 1) {
            ll a, b, val;
            cin >> a >> b >> val;
            update(1, 1, n, a, b, val);
        }
        else {
            ll k;   cin >> k;
            cout << query(1, 1, n, k, k) << endl;
        }
    }
}