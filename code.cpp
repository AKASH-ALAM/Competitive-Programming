#include <bits/stdc++.h>
using namespace std;
using ld = long double;
const ld PI = acos((ld) - 1);
using ull = unsigned long long;

#define endl          '\n'
#define int           long long
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define prec(x)       fixed<<setprecision(x)
#define rall(x)       (x).rbegin(),(x).rend()
#define testcase      "Case " << ts++ << ":"
//to_string(x)             sqrtl()   stol(s);

template              <typename T>
using minHeap = priority_queue<T, vector<T>, greater<T>>;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif
int ts = 1;

void solve() {
   int n, m;   cin >> n >> m;
   int mn = min(n, m), mx = max(n, m);
   int ans = min(2*mn, mx);
   cout << ans << endl;
   if(m >= n){
      int x = m;
      for(int i = 1; i <= n; i++){
         for(int j = 1; j <= x; j++) cout << j << ' ';
         for(int j = x; j < m; j++) cout << x << ' ';
         cout << endl;
         x--;
      }
   } else{
      vector <vector<int>> arr(n+5, vector<int>(m+5));
      int x = n;
      for(int i = 1; i <= m; i++){
         for(int j = 1; j <= x; j++) arr[j][i] = j;
         for(int j = x; j <= n; j++) arr[j][i] = x;
         x--;
      }
      for(int i = 1; i <= n; i++){
         for(int j = 1; j <= m; j++) cout << arr[i][j] << ' ';
         cout << endl;
      }
   }
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