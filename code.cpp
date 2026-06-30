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
   int n, k;  cin >> n >> k;
   vector <pair<int, int>> v(n);
   for(int i = 0; i < n; i++){
    cin >> v[i].first >> v[i].second;
   }

   sort(all(v), [](pair<int, int> a, pair<int, int> b, pair<int, int> c, pair<int, int> d){
    int x = abs(a.first - b.first) + abs(a.second - b.second);
    int y = abs(c.first - d.first) + abs(c.second - d.second);
    return x < y;
   });
}

int main() {
   ios_base::sync_with_stdio(false); 
   cin.tie(nullptr);
   int t = 1;
   //cin >> t;
   //cin.ignore();
   while (t--) {
      solve();
   }
   return 0;
}