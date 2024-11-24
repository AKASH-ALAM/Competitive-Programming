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

int const N = 2e5+5;
vector <int> tree[N];
int ancestor[N][21];
int depth[N];

void binary_lifting(int u, int p){
   ancestor[u][0] = p;
   if(u != 0) depth[u] = depth[p] + 1;
   for(int i = 1; i <= 20; i++){
      if(ancestor[u][i-1] != -1){
         ancestor[u][i] = ancestor[ancestor[u][i-1]][i-1];
      } else ancestor[u][i] = -1;
   }

   for(auto &v : tree[u]){
      if(v != p) binary_lifting(v, u);
   }
}

int query(int node, int k){
   if(depth[node] < k) return -1;
   for(int i = 20; i >= 0; i--){
      if(k & (1 << i)){
         node = ancestor[node][i];
         k -= (1 << i);
      }
   }
   return node;
}

void solve() {
   int n, q;  cin >> n >> q;
   for(int i = 2; i <= n; i++){
      int v = i, u;
      cin >> u;
      tree[u].push_back(v);
   }

   binary_lifting(1, -1);

   while(q--){
      int x, k;
      cin >> x >> k;
      cout << query(x, k) << endl;
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