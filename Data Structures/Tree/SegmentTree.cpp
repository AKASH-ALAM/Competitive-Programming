const int lim = 2e5 + 5;
int arr[lim];
ll segTree[4 * lim];

#define left    (idx << 1) // (idx * 2)
#define right   (idx << 1 | 1) // (idx * 2 + 1)
#define mid     ((lo + hi) >> 1) // ((lo + hi) / 2)

void build(int idx, int lo, int hi) {
    if (lo == hi) {
        segTree[idx] = arr[lo];
        return;
    }
    build(left, lo, mid), build(right, mid + 1, hi);
    segTree[idx] = min(segTree[left], segTree[right]);
}

ll query(int idx, int lo, int hi, int i, int j) {
    if (i > hi or j < lo) return LONG_MAX;
    else if (i <= lo and hi <= j) return segTree[idx];
    return min(query(left, lo, mid, i, j), query(right, mid + 1, hi, i, j));
}

void update(int idx, int lo, int hi, int i, int val) {
    if (i > hi or i < lo) return;
    else if (i <= lo and hi <= i) {
        segTree[idx] = val;
        return;
    }
    update(left, lo, mid, i, val), update(right, mid + 1, hi, i, val);
    segTree[idx] = min(segTree[left], segTree[right]);
}

void solve() {
    int n, q;   cin >> n >> q;

    for (int i = 1; i <= n; i++) cin >> arr[i];
    build(1, 1, n);

    while (q--) {
        int tp;   cin >> tp;
        if (tp == 1) {
            int k, u;   cin >> k >> u;
            update(1, 1, n, k, u);
        }
        else {
            int a, b;   cin >> a >> b;
            cout << query(1, 1, n, a, b) << endl;
        }
    }
}