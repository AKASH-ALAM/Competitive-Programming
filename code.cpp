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

void solve(){
    int n, m;   cin >> n >> m;
    vector <pair<int,int>> g[n+1];

    for(int i = 0; i < m; i++){
        int u, v;   cin >> u >> v;
        g[u].push_back({v, i});
        g[v].push_back({u, i});
    }

    vector <int> path;
    vector <bool> vis(m+1, 0);
    for(int i = 1; i <= n; i++) {
        if(sz(g[i]) % 2) {
            cout << "IMPOSSIBLE" << endl;
            return;
        }
    }
    stack <int> st;
    st.push(1);

    while(!st.empty()){
        int u = st.top();
        if(!g[u].empty()){
            auto [v, i] = g[u].back();
            g[u].pop_back();
            if(vis[i]) continue;
            vis[i] = true;
            st.push(v);
        }else {
            path.push_back(u);
            st.pop();
        }
    }

    if(sz(path) == m+1) {
        for(auto it : path) cout << it << ' ';
        cout << endl;
    } else  cout << "IMPOSSIBLE" << endl;
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