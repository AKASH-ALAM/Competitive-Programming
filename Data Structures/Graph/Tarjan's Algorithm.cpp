void Bridges(int u, int p, vector <int> *g) {
  vis[u] = 1; low[u] = tin[u] = ++timer;
  for (int &v : g[u]) {
    if (v == p) continue; 
    if (!vis[v]) { 
      Bridges(v, u, g);  
      low[u] = min(low[u], low[v]); 
      if (tin[u] < low[v]) br.push_back({u, v});
    } else low[u] = min(low[u], low[v]); 
  }
}

void Point(int u, int p, vector <int> *g) {
  int child = 0; vis[u] = 1; 
  tin[u] = low[u] = timer++;
  for (int &v : g[u]) {
    if (v == p) continue;
    if (!vis[v]) {
      Point(v, u, g);
      low[u] = min(low[u], low[v]);
      if (low[v] >= tin[u] && p != -1) mark[u] = 1;
      child++;
    } else low[u] = min(low[u], tin[v]);
  }
  if (p == -1 && child > 1) mark[u] = 1;
}