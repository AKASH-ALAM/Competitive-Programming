#include <bits/stdc++.h>
using namespace std;
using ld = long double;
const ld PI = acos((ld) - 1);
using ull = unsigned long long;

#define endl          '\n'
#define ll           long long
#define sz(x)         (int)x.size()
#define mem(a,x)      memset(a,x,sizeof(a))
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
//to_string(x)             sqrtl()   stol(s);

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
    segTree[idx] = gcd(segTree[left], segTree[right]);
}

ll query(int idx, int lo, int hi, int i, int j) {
    if (i > hi or j < lo) return 0;
    else if (i <= lo and hi <= j) return segTree[idx];
    return gcd(query(left, lo, mid, i, j), query(right, mid + 1, hi, i, j));
}

void update(int idx, int lo, int hi, int i, int val) {
    if (i > hi or i < lo) return;
    else if (i <= lo and hi <= i) {
        segTree[idx] = val;
        return;
    }
    update(left, lo, mid, i, val), update(right, mid + 1, hi, i, val);
    segTree[idx] = gcd(segTree[left], segTree[right]);
}

void solve() {
   int n;   cin >> n;
   for(int i = 1; i <= n; i++) cin >> arr[i];
   build(1, 1, n);
   cout << query(1, 1, n, 1, n) << endl;
}

signed main() {
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int t = 1;
   cin >> t;
   //cin.ignore();
   while (t--) {
      solve();
   }
   return 0;
}