bool detect(int n, vector <int> *g, int src) {
    queue <pair<int , int>> q; // node, parent
    vector <bool> vis(n, 0);
    q.push({src, -1});
    vis[src] = 1;
    while (!q.empty()) {
        auto [node, parent] = q.front();
        q.pop();
        for (auto adjnode : g[node]) {
            if (!vis[adjnode]) {
                vis[adjnode] = 1;
                q.push({adjnode, node});
            } else if (parent != adjnode) return true;
        }
    }
    return false;
}