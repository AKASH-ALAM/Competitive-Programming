bool isbipartite(int src, int n, vector <int> *g) {
    bool vis[n] = {0};
    int color[n];
    queue <int> q;

    memset(color, -1, sizeof(color));
    q.push(src);
    color[src] = 1;
    vis[src] = 1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : g[u]) {
            if (!vis[v]) {
                color[v] = 1 - color[u];
                vis[v] = 1;
                q.push(v);
            }
            if (color[v] == color[u]) return false;
        }
    }

    return true;
}


bool dfs(int c, int u, vector <int> &color, vector <int> *g) {
    color[u] = c;
    for (auto &v : g[u]) {
        if (color[v] == -1 and dfs(!c, v, color, g)) return true;
        else if (color[u] == color[v]) return true;
    }
    return false;
}