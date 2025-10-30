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
const int MX = 250005;
int  cs = 1, n;
ll dp[505][MX]; int arr[505];

ll fun(int i, int m){
   if(m < 0) return 0;
   if(i == n+1) {
      if(m == 0) return 1LL;
      return 0;
   }
   if(dp[i][m] != -1) return dp[i][m];
   return dp[i][m] = (fun(i+1, m-arr[i]) + fun(i+1, m)) % MOD;
}

void solve(){
   cin >> n;
   int m = (n * (n+1));
   if(m % 4) {
      cout << 0 << endl;
      return;
   }
   m = m / 4;
   for(int i = 1; i <= n; i++) arr[i] = i;
   memset(dp, -1, sizeof(dp));

   cout << fun(1, m) / 2 << endl;
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