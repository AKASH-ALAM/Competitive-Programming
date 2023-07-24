//using priority queue O(E log(V))
vector <int> dijkstra(int V, vector <vector<int>> adj[], int S) {
	priority_queue <pair <int, int>, vector <pair<int, int>>, greater <pair<int, int>>> pq;
	vector <int> dist(V, 1e9);
	pq.push({0, S});
	dist[S] = 0;

	while (!pq.empty()) {
		int node = pq.top().second;
		int dis = pq.top().first;
		pq.pop();
		for (auto it : adj[node]) {
			int Newnode = it[0];
			int w = it[1];
			if (dis + w < dist[Newnode]) {
				dist[Newnode] = dis + w;
				pq.push({dist[Newnode], Newnode});
			}
		}
	}
	return dist;
}

//using set data structure

vector <int> dijkstra(int V, vector<vector<int>> adj[], int S) {
	set <pair<int, int>> st;
	vector <int> dist(V, 1e9);
	st.insert({0, S});
	dist[S] = 0;

	while (!st.empty()) {
		auto it = *(st.begin());
		int node = it.second;
		int w = it.first;
		st.erase(it);

		for (auto u : adj[node]) {
			int adjNode = u[0];
			int edgw = u[1];

			if (w + edgw < dist[adjNode]) {
				if (dist[adjNode] != 1e9) st.erase({dist[adjNode], adjNode});

				dist[adjNode] = w + edgw;
				st.insert({dist[adjNode], adjNode});
			}
		}
	}
	return dist;
}