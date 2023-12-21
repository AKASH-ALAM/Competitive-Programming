int No_of_Nodes(int u, vector <int> *grid, vector <bool> &vis) {
	vis[u] = 1;
	int cnt = 1;
	for (auto v : grid[u]) {
		if (!vis[v]) {
			cnt += No_of_Nodes(v, grid, vis);
		}
	}
	return cnt;
}