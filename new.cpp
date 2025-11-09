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
    vector <int> g[n+1];
    vector <int> in(n+1, 0);
    for(int i = 0; i < m; i++){
        int u, v;   cin >> u >> v;
        g[u].push_back(v);
        in[v]++;
    }

    queue <int> q;
    for(int i = 2; i <= n; i++) if(in[i] == 0) q.push(i);

    while(!q.empty()){
        int u = q.front(); q.pop();
        for(auto &v : g[u]){
            in[v]--;
            if(v == 1) continue;
            if(in[v] == 0) q.push(v);
        }
    }
    vector <int> dist(n+1, 0), par(n+1, 0);
    q.push(1);
    dist[1] = 1;
    par[1] = 1;

    while(!q.empty()){
        int u = q.front(); q.pop();
        for(auto &v : g[u]){
            in[v]--;
            if(dist[v] < dist[u] + 1){
                dist[v] = dist[u] + 1;
                par[v] = u;
            }
            if(in[v] == 0) q.push(v);
        }
    }

    if(dist[n]) {
        int x = n;
        vector <int> path;
        while(x != 1){
            path.push_back(x);
            x = par[x];
        }
        path.push_back(1);
        reverse(all(path));
        
        cout << dist[n] << endl;
        for(auto it : path) cout << it << ' ';
        cout << endl;
    }
    else cout << "IMPOSSIBLE" << endl;
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