vector <int> nodes;
bool dfs(int node, vector <int> *g, vector <bool> &vis, int par) {
    vis[node] = 1;
    nodes.push_back(node);
    for (auto it : g[node]) {
        if (!vis[it]) {
            if (dfs(it, g, vis, node)) return true;
        }
        else if (it != par) {
            nodes.push_back(it);
            return true;
        }
    }
    nodes.pop_back();
    return false;
}