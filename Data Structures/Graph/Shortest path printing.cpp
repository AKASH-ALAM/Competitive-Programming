vector <int> BFS(int n, int src, int destination, vector <pair<int, int>> *g) {
    vector <int> dis(n + 1, INT_MAX), parent(n + 1, 0);
    priority_queue<pair<int, int>, vector <pair<int, int>>, greater <pair<int, int>>> pq;
    parent[src] = src;
    pq.push({0, src});
    dis[src] = 0;

    while (!pq.empty()) {
        auto [w, u] = pq.top();
        pq.pop();
        if (dis[u] < w) continue;
        for (auto [v, edgw] : g[u]) {
            if (w + edgw < dis[v]) {
                dis[v] = w + edgw;
                parent[v] = u;
                pq.push({w + edgw, v});
            }
        }
    }

    int node = destination;
    vector <int> path;
    while (parent[node] != node) {
        path.push_back(parent[node]);
        node = parent[node];
    }

    reverse(all(path));
    path.push_back(destination);
    return path;
}