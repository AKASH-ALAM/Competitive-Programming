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

template              <typename T>
using minHeap = priority_queue<T, vector<T>, greater<T>>;
//stol(s);      sqrtl()    to_string(x);

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

void solve() {
   vector <int> v(10+1);
   for(int i = 0; i <= 10; i++) v[i] = i;

    for(int i = 0; i < 10; i++){
        for(auto it : v) cout << it <<  '\t';
        cout << endl;
        v[0] = v[0]|v[1];
        for(int j = 1; j < 10; j++){
            v[j] = v[j]|v[j-1]|v[j+1];
        }
    }

    for(auto it : v) cout << it << '\t';
    cout << endl;
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