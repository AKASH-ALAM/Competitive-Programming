#include <bits/stdc++.h>
using namespace std;
using ld = long double;
const ld PI = acos((ld) - 1);
using ull = unsigned long long;

#define endl          '\n'
#define int           long long
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
//to_string(x)             sqrtl()   stol(s);

template              <typename T>
using minHeap = priority_queue<T, vector<T>, greater<T>>;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

void solve() {
   int n, m, x;
   cin >> n >> m >> x;
   vector <pair<int, int>> v;
   vector <int> indx(n+1);

   for(int i = 0; i < n; i++){
      int val; cin >> val;
      v.push_back({val, i});
   }

   sort(rall(v));

   set <pair<int, int>> st;

   for(int i = 0; i < m; i++){
      st.insert({v[i].first, i});
      indx[v[i].second] = i;
   }

   for(int i = m; i < n; i++){
      int val = st.begin()->first;
      int idx = st.begin()->second;

      st.erase(st.begin());
      st.insert({val + v[i].first, idx});
      indx[v[i].second] = idx;
   }

   int first = st.begin()->first, last = st.rbegin()->first;
   
   if(last - first <= x){
      cout << "YES" << endl;
      for(int i = 0; i < n; i++) cout << indx[i] + 1 << ' ';
      cout << endl;
   }
   else cout << "NO" << endl;
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