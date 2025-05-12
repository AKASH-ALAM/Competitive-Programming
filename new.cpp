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

istream &operator >> (istream &is, __int128 &v) {
   string s; is >> s; v = 0;
   for(auto &it : s) if(isdigit(it)) v = v*10 + it - '0';
   if(s[0] == '-') v *= -1;
   return is;
}

ostream &operator << (ostream &os, const __int128 &v) {
   if(v == 0) return (os << "0");
   __int128 num = v;
   if(v < 0) os << '-', num = -num;
   string s;
   for(;num > 0; num /= 10) s.push_back((char)(num % 10) + '0');
   reverse(all(s));
   return (os << s);
} 

void solve() {
   __int128 a;
   cin >> a;
   __int128 b = a / a;
   cout << b << endl;
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