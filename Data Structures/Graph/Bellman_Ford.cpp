//O(ExV)    Find the shortest distance of all the vertex's from the source vertex S
vector <int> bellman_ford(int V, vector <vector<int>> &edges, int S) {
    vector <int> dis(V, 1e8);   dis[S] = 0;

    for (int i = 0; i < V - 1; i++) {
        for (auto it : edges) {
            int u = it[0];
            int v = it[1];
            int w = it[2];
            if (dis[u] != 1e8 and w + dis[u] < dis[v]) {
                dis[v] = w + dis[u];
            }
        }
    }
    //N'th relaxation to check negative cycle
    for (auto it : edges) {
        int u = it[0];
        int v = it[1];
        int w = it[2];
        if (dis[v] != 1e8 and w + dis[u] < dis[v]) {
            return { -1};
        }
    }
    return dis;
}