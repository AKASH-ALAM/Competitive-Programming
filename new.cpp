#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;

#define endl          '\n'
#define sz(x)         (int)x.size()
#define all(x)        (x).begin(),(x).end()
#define rall(x)       (x).rbegin(),(x).rend()
#define prec(x)       fixed<<setprecision(x)
#define testcase      cout << "Case " << cs++ << ":"
//stol(s);sqrtl()     to_string(x);

template              <typename T>
using minHeap         = priority_queue<T, vector<T>, greater<T>>;
#define unsyncIO      ios_base::sync_with_stdio(false); cin.tie(nullptr)

const ld PI = acos((ld) - 1);
const int MOD = 1e9 + 7;
const ll INF = 2e18 + 1;
const ld EPS = 1e-9;
const int MX = 2e6;
int  cs = 1;

#ifdef LOCAL
#include "debug.h"
#else
#define debug(...)
#endif

struct DSU { // O(4xalpha) = Constant time
    vector <int> size, parent;

    DSU(int n) {
        size.resize(n + 1);
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int Find(int node) {
        if (node == parent[node]) return node;
        return parent[node] = Find(parent[node]);
    }

    void Union(int u, int v) {
        u = Find(u), v = Find(v);
        if (u == v) return;
        if(size[u] < size[v]) swap(u, v);
        
        parent[v] = u;
        size[u] += size[v];
    }
}; 

void solve(){
    int n, m;
    cin >> n >> m;
    DSU ds(n);

    for(int i = 0; i < m; i++){
        char ch;    cin >> ch;
        if(ch == '+'){
            int u, v;   
            cin >> u >> v;

            ds.Union(u, v);
        }
        else if(ch == '?'){
            int u, v;
            cin >> u >> v;

            if(ds.Find(u) == ds.Find(v)) cout << "Friend" << endl;
            else cout << "Not Friend" << endl;
        }
        else {
            int u;  cin >> u;
            cout << "Size : " << ds.size[u] << endl;
        }
    }
}

int main() {
    unsyncIO;
    int t = 1;
    // cin >> t;
    //cin.ignore();
    while (t--) {
        solve();
    }

    return 0;
}