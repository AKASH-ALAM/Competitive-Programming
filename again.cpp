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

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

void solve(){
   double n, k;   cin >> n >> k;
   double d, x, y;   cin >> d >> x >> y;

   cout << prec(6);

   if(n <= k and y >= x){
      double ans = d / y;
      cout << ans << endl;
   }
   else if(n-k <= k and y > x){
      double ans = LLONG_MAX;
      for(int i = 1; y*i <= d; i++){
         double half = (i*y) / x;
         double rest = (d-(i*y)) / y;
         cerr << i*y << ' ' << d - (i*y) << "  " << half << '-' << rest <<  " = " << half+rest << endl;
         ans = min(ans, half + rest);
      }
      cout << ans << endl;
   }
   else {
      double ans = d / x;
      cout << ans << endl;
   }
}

int main() {
#ifdef LOCAL
    clock_t tStart = clock();
#endif

    unsyncIO;
    int t = 1;
    cin >> t;

    //cin.ignore();
    while (t--) {
        solve();
    }

#ifdef LOCAL
    cerr << "\nRuntime: " << (ld) (clock() - tStart) / CLOCKS_PER_SEC << " Seconds" << endl;
#endif
    return 0;
}