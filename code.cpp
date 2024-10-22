#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using ll = long long;
using ld = long double;
using namespace __gnu_pbds;
using ull = unsigned long long;

#define endl          '\n'
#define sqr(x)        (x) * (x)
#define gcd(x,y)      __gcd(x,y)
#define sz(x)         (int)x.size()
#define lcm(x,y)      ((x/gcd(x,y)) * y)
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define mem(a,x)      memset(a,x,sizeof(a))
#define testcase      cout << "Case " << cs++ << ":"
//stol(s);sqrtl()     to_string(x);

template              <typename T>
using minHeap         = priority_queue<T, vector<T>, greater<T>>;
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)
template <class T>    using orderset = tree<T, null_type,
less<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <class T> using multiorderset = tree<T, null_type,
less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;

const ld PI = acos((ld) - 1);
const int MOD = 1e9 + 7;
const ll INF = 2e18 + 1;
const ld EPS = 1e-9;
const int MX = 2e6;
int  cs = 1;

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
    segTree[idx] = segTree[left] + segTree[right];
}

void update(int idx, int lo, int hi, int i, int val) {
    if (i > hi or i < lo) return;
    else if (i <= lo and hi <= i) {
        segTree[idx] = val;
        return;
    }
    update(left, lo, mid, i, val), update(right, mid + 1, hi, i, val);
    segTree[idx] = segTree[left] + segTree[right];
}

void solve() {
   int n;
   cin >> n;
   vector <int> v(n+1);

   for (int i = 1; i <= n; i++) arr[i] = 1;
   for(int i = 1; i <= n; i++) cin >> v[i];

   build(1, 1, n);
   
   for(int i = 0; i < n; i++){
      int idx; cin >> idx;
      for(int j = 1; j <= n; j++) cerr << segTree[j] << " \n"[j == n];

      // int x = binary_search(segTree+1, arr+n, idx) - arr[0];

      // cerr << idx << ' ' << x << endl;

      // cout << v[x] << ' ';
      // update(1, 1, n, x, idx-1);
   } cout << endl;
}

int main() {
#ifdef LOCAL
    clock_t tStart = clock();
#endif

    unsyncIO;
    int t = 1;
    //cin >> t;

    //cin.ignore();
    while (t--) {
        solve();
    }

#ifdef LOCAL
    cerr << "\nRuntime: " << (ld) (clock() - tStart) / CLOCKS_PER_SEC << " Seconds" << endl;
#endif
    return 0;
}