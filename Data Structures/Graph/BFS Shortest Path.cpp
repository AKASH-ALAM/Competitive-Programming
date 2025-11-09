// 0/1 shortest path

void solve() {
	int n, e;  cin >> n >> e;
	vector <pair <int, int>> g[n + 1];

	for (int i = 0; i < e; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		g[u].push_back({v, w});
		g[v].push_back({u, w});
	}

	bool vis[n] = {0};
	int dis[n];
	int src = 1;
	deque <int> dq;
	dq.push_back(src);
	vis[src] = 1;
	dis[src] = 0;

	while (!dq.empty()) {
		int node = dq.front();
		dq.pop_front();

		for (int i = 0; i < sz(g[node]); i++) {
			int v = g[node][i].first;
			int w = g[node][i].second;
			if (w == 1 or vis[v]) continue;
			vis[v] = 1;
			dis[v] = dis[node] + w;
			dq.push_front(v);
		}

		for (int i = 0; i < sz(g[node]); i++) {
			int v = g[node][i].first;
			int w = g[node][i].second;
			if (w == 0 or vis[v]) continue;
			vis[v] = 1;
			dis[v] = dis[node] + w;
			dq.push_back(v);
		}
	}

	for (int i = 1; i <= n; i++) cout << i << " : " << dis[i] << endl;
}
