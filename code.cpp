#include <bits/stdc++.h>
using namespace std;
using ld = long double;
const ld PI = acos((ld) - 1);
using ull = unsigned long long;

#define endl          '\n'
#define ll           long long
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

ll nCr(ll n, ll r) { //Calculate nCr using Pascal’s Triangle: O(r)
   if (r > n) return 0;
   if (r == 0 or n == r) return 1;
   if (n - r < r) r = n - r;

   r = min(n, r);   ll p = 1;

   for (ll i = 1; i <= r; i++) {
      p = (p * (n - r + i)) / i;
   }
   return p;
}

void print(__int128 x) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}

void solve() {
   ll n;   cin >> n;
   __int128 ans = 0;
   ll len = log2(n) + 1;
   for(ll i = 1; i <= len; i++) {
      ans += nCr(len, i) * i;
   }
   print(ans);
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