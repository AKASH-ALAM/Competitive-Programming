#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;

#define endl          '\n'
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed << setprecision(x)
#define testcase      cout << "Case " << cs++ << ":"
//stol(s);sqrtl()     to_string(x);

template              <typename T>
using minHeap         = priority_queue<T, vector<T>, greater<T>>;

const ld PI = acos((ld) - 1);
const int MOD = 1e9 + 7;
const ll INF = 2e18 + 1;
const ld EPS = 1e-9;
const int MX = 2e6;
int  cs = 1;
ll a, b, c, pos;
ll check(ll x){
   ll i = a * b, j = b * c, k = a * c;
   ll ans = (x/i) + (x/j) + (x/k);
   ans -= ((x / lcm(i, j)) + (x / lcm(j, k)) + (x / lcm(i, k)) + );
   return ans;
}

void solve(){
   cin >> a >> b >> c >> pos;

   ll lo = 0, hi = 1e18, ans = -1;

   while(lo <= hi){
      ll mid = lo + (hi - lo) / 2;
      if(check(mid) >= pos){
         ans = mid;
         hi = mid - 1;
      } else lo = mid + 1;
   }

   cout << ans << endl;
}

int main() {
   ios_base::sync_with_stdio(false); 
   cin.tie(nullptr);
   int t = 1;
   //cin >> t;
   //cin.ignore();
   while (t--) {
      solve();
   }
   return 0;
}