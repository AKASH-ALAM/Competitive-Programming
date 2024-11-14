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
   int n, k;    cin >> n >> k;
   if(k == (1+n)/2){
    cout << n << endl;
    for(int i = 1; i <= n; i++) cout << i << ' ';
    cout << endl;
   } else cout << -1 << endl;
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