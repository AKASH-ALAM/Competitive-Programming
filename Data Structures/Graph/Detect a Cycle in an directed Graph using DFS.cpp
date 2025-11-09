vector <int> nodes;
bool dfs(int node, vector <int> *g, vector <bool> &vis, vector <bool> &par) {
    vis[node] = 1;
    par[node] = 1;
    nodes.push_back(node);
    for (auto it : g[node]) {
        if (!vis[it]) {
            if (dfs(it, g, vis, par)) return true;
        }
        else if (par[it]) {
            nodes.push_back(it);
            return true;
        }
    }
    nodes.pop_back();
    par[node] = 0;
    return false;
}