int const N = 1005;
bool vis[N][N];
int dis[N][N];
//direction array
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void solve() {
    vector <string> grid = {
        "oooSoo",
        "o####o",
        "#SoSoo",
        "oo##oo"
    };

    queue <pair<int, int>> Q;

    int row = sz(grid);
    int col = sz(grid[0]);

    //insert border node
    for (int i = 0; i < col; i++) {
        if (grid[0][i] != '#') { //first row
            Q.push({0, i});
            vis[0][i] = 1;
        }

        if (grid[row - 1][i] != '#') { // last row
            Q.push({row - 1, i});
            vis[row - 1][i] = 1;
        }
    }

    for (int i = 1; i < row - 1; i++) {
        if (grid[i][0] != '#') { // first column
            Q.push({i, 0});
            vis[i][0] = 1;
        }

        if (grid[i][col - 1] != '#') { // last column
            Q.push({i, col - 1});
            vis[i][col - 1] = 1;
        }
    }

    while (!Q.empty()) { // run BFS from destination
        pair <int, int> node;
        node = Q.front();
        Q.pop();

        for (int i = 0; i < 4; i++) {
            int x = node.first + dx[i];
            int y = node.second + dy[i];

            if (x < 0 or y < 0 or x >= row or y >= col) continue; // outside grid
            if (vis[x][y] or grid[x][y] == '#') continue;

            vis[x][y] = 1;
            dis[x][y] = dis[node.first][node.second] + 1;
            Q.push({x, y});
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) cout << dis[i][j] << " ";
        cout << endl;
    }

}