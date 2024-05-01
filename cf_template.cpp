 <snippet>
    <content><![CDATA[
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
   $0
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
]]></content>
    <!-- Optional: Set a tabTrigger to define how to trigger the snippet -->
    <tabTrigger>#cf</tabTrigger>
    <!-- Optional: Set a scope to limit where the snippet will trigger -->
    <scope>source.c++</scope>
</snippet>
