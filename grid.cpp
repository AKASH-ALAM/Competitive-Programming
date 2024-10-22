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
   int n;
   cin >> n;
   vector <int> v;
   for(int i = 1; i <= n; i += 2) v.push_back(i);
   for(auto it : v) cout << it << ' ';
   cout << endl;

   while(sz(v) != 1){
      vector <int> tmp;
      
      for(int i = sz(v) % 2; i < sz(v); i += 2){
         if(i % 2 == 0) cout << v[i] << ' ';
         else tmp.push_back(v[i]);
      } cout << endl;
 
      v = tmp;
      for(auto it : v) cerr << it << ' ';
      cerr << endl;
   }   
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