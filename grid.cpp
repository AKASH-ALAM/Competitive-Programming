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

string ans;

int call(int l, int r, int val, vector <int> &v, string s){
   if(l > r) return 0;
   if(ans < s) ans = s;
   int one = 0;
   if(v[l] > val) one = max(one, 1 + call(l+1, r, v[l], v, s + 'L'));
   if(v[r] > val) one = max(one, 1 + call(l, r-1, v[r], v, s + 'R'));
   if(v[l] == v[r]) one = max(1 + call(l+1, r, v[l], v, s + 'L'), 1 + call(l, r-1, v[r], v, s + 'R'));
   return one;
}

void solve() {
   int n;
   cin >> n;
   vector <int> v(n);
   for(auto &it : v) cin >> it;
   if(v[0] < v[n-1]){
      cout << call(1, n-1, v[0], v, "L") << endl;
   }
   else {
      cout << call(0, n-2, v[n-1], v, "R") << endl;
   }
   cout << ans << endl;
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