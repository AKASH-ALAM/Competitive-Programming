#include <bits/stdc++.h>
using namespace std;
using ld = long double;
const ld PI = acos((ld) - 1);
using ull = unsigned long long;

#define endl          '\n'
#define int           long long
#define sz(x)         (int)x.size()
#define mem(a,x)      memset(a,x,sizeof(a))
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
//to_string(x)             sqrtl()   stol(s);

void solve() {
   int n;   cin >> n;
   vector <int> v(n);
   for(auto &it : v) cin >> it;
   sort(all(v));

   int mx = v[n-1];
   int cnt = 0;
   // cerr << mx << endl;
   for(int i = 0; i < n-1; i++){
      if(v[i]+v[i+1] <= mx) cnt++;
   }

   cout << cnt << endl;
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