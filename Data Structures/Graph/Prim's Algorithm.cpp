//Function to find sum of weights of edges of the Minimum Spanning Tree.
int spanningTree(int V, vector <pair<int, int>> *adj) { // O(ElogE)
    priority_queue <pair<int, int>, vector <pair<int, int>>, greater <pair<int, int>>>  q;
    vector <int> vis(V, 0);
    q.push({0, 0}); // weight and node
    int sum = 0;
    while (!q.empty()) {
        int node = q.top().second;
        int w = q.top().first;
        q.pop();
        if (vis[node] == 1) continue;
        vis[node] = 1;
        sum += w;
        for (auto it : adj[node]) {
            int adjNode = it.first;
            int adjw = it.second;
            if (!vis[adjNode]) q.push({adjw, adjNode});
        }
    }

    return sum;
}