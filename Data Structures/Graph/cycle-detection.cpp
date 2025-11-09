int const N = 100;
vector <int> g[N];
enum Color {WHITE, GRAY, BLACK};
int color[N];

bool dfs(int u) {
    color[u] = GRAY;

    for (int adj : g[u]) {
        if (color[adj] == GRAY) return true;
        if (color[adj] == WHITE and dfs(adj)) return true;
    }

    color[u] = BLACK;
    return false;
}

void solve() {
    int n;  cin >> n;
    for (int i = 0; i < n; i++) {
        int u, v;   cin >> u >> v;
        g[u].push_back(v);
    }

    if (dfs(1)) cout << "Yes" << endl;
    else cout << "No" << endl;
}