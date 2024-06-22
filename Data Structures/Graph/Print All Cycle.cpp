const int N = 100000;
vector <int> graph[N];
vector <vector<int>> cycles;

// Function to mark the vertex with
// different colors for different cycles

void dfs_cycle(int u, int p, int color[], int par[], int& cyclenumber){
    if (color[u] == 2) return;  // already (completely) visited vertex.

    // seen vertex, but was not completely visited -> cycle detected.
    // backtrack based on parents to find the complete cycle.

    if (color[u] == 1) {
        vector <int> v;
        cyclenumber++;
        
        int cur = p;
        v.push_back(cur);

        // backtrack the vertex which are
        // in the current cycle thats found
        while (cur != u) {
            cur = par[cur];
            v.push_back(cur);
        }
        cycles.push_back(v);
        return;
    }

    par[u] = p;
    color[u] = 1;   // partially visited.
   
    for (int v : graph[u]) {            // simple dfs on graph
        if (v == par[u]) continue;     // if it has not been visited previously
        dfs_cycle(v, u, color, par, cyclenumber);
    }
    color[u] = 2;   // completely visited.
}