#include <bits/stdc++.h>

using namespace std;
using ld = long double;
const ld PI = acos((ld) - 1);
using ull = unsigned long long;

#define endl          '\n'
#define int          long long
#define sz(x)         (int)x.size()
#define mem(a,x)      memset(a,x,sizeof(a))
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
//stol(s);sqrtl()     to_string(x);

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

void solve() {
   int n, k;   cin >> n >> k;
   vector <int> v(n);
   for(auto &it : v) cin >> it;
   vector <int> dif;

   if(n >= 2){
     if(v[0] > v[1])  dif.push_back(abs(v[0]- v[1]));
     if(v[n-1] > v[n-2]) dif.push_back(abs(v[n-1]-v[n-2]));
   }

   for(int i = 1; i < n-1; i++){
      if(v[i] >= v[i-1] or v[i] >= v[i+1]) dif.push_back(abs(v[i] - min(v[i-1], v[i+1])));
   }
   sort(rall(dif));
   int sum = 0;
   for(auto & it : v) sum += it;

   for(int i = 0; i < k and i < sz(dif); i++) sum -= dif[i];
   cout << sum << endl;
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