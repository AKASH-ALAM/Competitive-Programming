bool adj[100][100];

void solve() {
    int node, edge;  cin >> node >> edge;

    int a, b;
    vector <int> adj_list[node + 1]; // 2D array
    //vector < vector <int >> adj_list(node + 1);

    for (int i = 0; i < edge; i++) {
        cin >> a >> b;
        adj[a][b] = 1;
        adj[b][a] = 1;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    cout << "adj_matrix" << endl;
    for (int i = 1; i <= node; i++) {
        for (int j = 1; j <= node; j++) cout << adj[i][j] << " \n"[j == node];
    }

    cout << endl << "adj_list" << endl;
    for (int i = 1; i <= node; i++) {
        cout << "Node " << i << ": ";
        for (int j = 1; j < sz(adj_list[i]); j++) cout << adj_list[i][j] << " ";
        cout << endl;
    }

}