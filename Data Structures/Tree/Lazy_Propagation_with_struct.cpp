const int lim = 2e5 + 5 ;
pair<ll, ll> segtree[4 * lim] ;

#define     left    (2 * iter)
#define     right   (2 * iter + 1)
#define     mid     (lo + (hi - lo)/2)


struct SegmentTree {// 1 based indexing
    int n ;

    SegmentTree(int nn, int arr[]) {
        n = nn ;
        build(1, 1, n, arr) ;
    }

    inline void mrg(int iter) {
        segtree[iter].first = segtree[left].first + segtree[right].first;
    }

    void build(int iter, int lo, int hi, int arr[]) {
        if (lo == hi) {
            segtree[iter] = {arr[lo], 0};
            return ;
        }
        build(left, lo, mid, arr) ;
        build(right, mid + 1, hi, arr) ;
        mrg(iter) ;
        segtree[iter].second = 0 ;
    }

    inline void lazy_update(int iter, int lo, int hi, ll x) {
        segtree[iter].first += (hi - lo + 1LL) * x;
        segtree[iter].second += x ;
    }
    inline void push_down(int iter, int lo, int hi) {
        lazy_update(left, lo, mid, segtree[iter].second) ;
        lazy_update(right, mid + 1, hi, segtree[iter].second) ;
        segtree[iter].second = 0 ;
    }

    void update(int iter, int lo, int hi, int qi, int qj, ll x) {
        if (lo > qj || hi < qi) return ;
        if (qi <= lo && hi <= qj) {
            lazy_update(iter, lo, hi, x) ;
            return ;
        }
        push_down(iter, lo, hi) ;
        update(left, lo, mid, qi, qj, x) ;
        update(right, mid + 1, hi, qi, qj, x) ;
        mrg(iter) ;
    }
    void update(int qi, int qj, ll val) {
        update(1, 1, n, qi, qj, val) ;
    }

    ll query(int iter, int lo, int hi, int qi, int qj) {
        if (lo > qj || hi < qi) return 0 ;
        if (qi <= lo && hi <= qj) return segtree[iter].first ;
        push_down(iter, lo, hi) ;
        ll L = query(left, lo, mid, qi, qj) ;
        ll R = query(right, mid + 1, hi, qi, qj) ;
        mrg(iter) ;
        return L + R ;
    }
    ll query(int qi, int qj) {
        return query(1, 1, n, qi, qj) ;
    }
};

void solve() {
    int n, q;   cin >> n >> q;
    int arr[n + 5];

    for (int i = 1; i <= n; i++) cin >> arr[i];

    SegmentTree sg(n, arr);

    while (q--) {
        int in; cin >> in;
        if (in == 1) {
            ll a, b, val;
            cin >> a >> b >> val;
            sg.update(a, b, val);
        }
        else {
            ll k;  cin >> k;
            cout << sg.query(k, k) << endl;
        }
    }
}
