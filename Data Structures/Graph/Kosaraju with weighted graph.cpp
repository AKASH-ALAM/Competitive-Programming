stack <int> order;
vector <bool> vis;
int id[MX]; ll cost[MX];

void dfs1(int u, vector <pair<int, int>> *g){
    vis[u] = 1;
    for(auto [v, w] : g[u]){
        if(!vis[v]) dfs1(v, g);
    }
    order.push(u);
}

void dfs2(int u, vector <pair<int, int>> *g, int x){
    id[u] = x;
    vis[u] = 1;
    for(auto [v, w] : g[u]){
        if(!vis[v]) {
            dfs2(v, g, x);
        }
    }
}

ll fun(ll n){
    ll lo = 0, hi = 1e8, ans = 0;
    while(lo <= hi){
        ll mid = (lo + hi) / 2;
        if(mid * (mid+1) / 2 <= n) {
            lo = mid + 1;
            ans = mid;
        } else hi = mid - 1;
    }
    return (n * (ans + 1)) - (ans * (ans+1) * (ans+2)) / 6;
}

ll dfs(int u, vector <pair<int,int>> *g, vector <ll> &dp){
    if(dp[u] != -1) return dp[u];

    ll x = cost[u];
    for(auto [v, w] : g[u]){
        x = max(x, cost[u] + w + dfs(v, g, dp));
    }
    return dp[u] = x;
}

void solve(){
    int n, m;   cin >> n >> m;
    vector <pair<int, int>> g[n+1], rg[n+1];
    for(int i = 0; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        rg[v].push_back({u, w});
    }
    int s;  cin >> s;

    vis.assign(n+1, false);
    for(int i = 1; i <= n; i++) if(!vis[i]) dfs1(i, g);
    vis.assign(n+1, false);

    int x = 0;
    while(!order.empty()){
        int u = order.top(); order.pop();
        if(vis[u]) continue;

        dfs2(u, rg, x++);
    }
    vector <pair<int, int>> condens[n+1];

    for(int u = 1; u <= n; u++){
        for(auto [v, w] : g[u]){
            if(id[u] != id[v]){
                condens[id[u]].push_back({id[v], w});
            }
            else cost[id[u]] += fun(w);
        }
    }

    vis.assign(n+1, false);
    vector <ll> dp(n+1, -1);
    cout << dfs(id[s], condens, dp) << endl;
}