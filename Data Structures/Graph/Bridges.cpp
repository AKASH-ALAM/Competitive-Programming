int Bridges(int u, int p) {
  low[u] = tin[u] = ++Time;
  for (int &v : adj[u]) {
    if (v == p) continue; 
    if (!vis[v]) { 
      Bridges(v, u);  
      low[u] = min(low[u], low[v]); 
      if (tin[u] < low[v]) br.push_back({u, v});
    } else low[u] = min(low[u], low[v]); 
  }
}