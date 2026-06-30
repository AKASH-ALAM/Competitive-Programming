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

void solve(){
   int n; cin >> n;
   vector <vector<int>> v(n);
   for(int i = 0; i < n; i++){
      int m;   cin >> m;
      vector <int> tmp(m);
      for(auto &it : tmp) cin >> it;
      map <int, int> mp;
      for(int j = m-1; j >= 0; j--){
         if(mp.count(tmp[j])) continue;
         v[i].push_back(tmp[j]);
         mp[tmp[j]] = 1;
      }
   } 

   map <int, int> have;
   vector <int> q, take(n, 0);

   for(int i = 0; i < n; i++){
      vector <int> mn;
      int idx = 0;
      for(int j = 0; j < n; j++){
         if(take[j]) continue;
         vector <int> tmp;
         for(auto &it : v[j]){
            if(have.count(it)) continue;
            tmp.push_back(it);
         }
         if(tmp.empty()) continue;
         if(mn.empty()) mn = tmp;
         else if(tmp < mn) {
            mn = tmp;
            idx = j;
         }
      }
      take[idx] = 1;
      for(auto &it : mn){
         q.push_back(it);
         have[it] = 1;
      }
   }

   for(auto it : q) cout << it << ' ';
   cout << endl;
}

int main() {
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