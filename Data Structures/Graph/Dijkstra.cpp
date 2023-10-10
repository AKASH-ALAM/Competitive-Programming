//using priority queue O(E log(V))
vector <ll> dijkstra(ll V, vector<pair<ll, ll>> *adj, ll S) {
	priority_queue <pair <ll, ll>, vector <pair<ll, ll>>, greater <pair<ll, ll>>> pq;
	vector <ll> dist(V, 1e18);

	pq.push({0, S});
	dist[S] = 0;

	while (!pq.empty()) {
		auto [dis, u] = pq.top();
		pq.pop();
		if (dist[u] < dis) continue;
		for (auto it : adj[u]) {
			auto [v, w] = it;
			if (dis + w < dist[v]) {
				dist[v] = dis + w;
				pq.push({dist[v], v});
			}
		}
	}
	return dist;
}

//using set data structure
// it's faster then priority queue
vector <ll>  dijkstra(ll V, vector<pair<ll, ll>> *adj, ll S) {
	set <pair<ll, ll>> st;
	vector <ll> dist(V, 1e18);

	st.insert({0, S});
	dist[S] = 0;

	while (!st.empty()) {
		auto [w, u] = *st.begin();
		st.erase(st.begin());

		for (auto it : adj[u]) {
			auto [v, edgw] = it;

			if (w + edgw < dist[v]) {
				if (dist[v] != 1e18) st.erase({dist[v], v});

				dist[v] = w + edgw;
				st.insert({dist[v], v});
			}
		}
	}
	return dist;
}