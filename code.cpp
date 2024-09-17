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
   int n, k;

   cin >> n >> k;
   vector <int> v(n);
   for(auto &it : v) cin >> it;

   deque <int> d;
   vector <int> ans;

   for(int i = 0; i < k; i++){
      while(!d.empty() and v[d.back()] > v[i]) d.pop_back();
      d.push_back(i);
   }
   ans.push_back(v[d.front()]);

   for(int i = k; i < n; i++){
      if(d.front() == i-k) d.pop_front();

      while(!d.empty() and v[d.back()] > v[i]) d.pop_back();

      d.push_back(i);
      ans.push_back(v[d.front()]);
   }

   for(auto it : ans) cout << it << ' ';
   cout << endl;
}

signed main() {
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int t = 1;
   // cin >> t;
   //cin.ignore();
   while (t--) {
      solve();
   }
   return 0;
}