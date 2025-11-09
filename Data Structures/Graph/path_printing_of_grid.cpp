int dx[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {  0, 0, -1, 1, -1, 1, -1, 1};

void Path_printing_of_grid(int n, int m, vector <vector<char>> &grid, ) {
	int n, m;	cin >> n >> m;
	vector <vector<char>> grid(n + 1, vector <char>(m + 1));
	int rw = 0, cl = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> grid[i][j];
			if (grid[i][j] == 'A') {
				rw = i, cl = j;
			}
		}
	}

	vector <vector<bool>> vis(n + 1, vector <bool>(m + 1));
	vector <vector<char>> path(n + 1, vector <char>(m + 1, '.'));
	queue <pair<int, int>> q;

	path[rw][cl] = 'A';
	q.push({rw, cl});
	vis[rw][cl] = 1;
	int sr = 0, sc = 0;
	bool found = 0;

	while (!found and !q.empty()) {
		int r = q.front().first;
		int c = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int row = r + dx[i];
			int col = c + dy[i];
			if (row >= 0 and row < n and col >= 0 and col < m and grid[row][col] != '#' and !vis[row][col]) {
				if (col == c) {
					if (row < r) path[row][col] = 'U';
					else path[row][col] = 'D';
				}
				else if (row == r) {
					if (col < c) path[row][col] = 'L';
					else path[row][col] = 'R';
				}
				if (grid[row][col] == 'B') {
					sr = row;
					sc = col;
					found = 1;
				}
				vis[row][col] = 1;
				q.push({row, col});
			}
		}
	}

	list <char> ans;
	while (path[sr][sc] != 'A' and found) {
		ans.push_front(path[sr][sc]);
		if (path[sr][sc] == 'U') sr++;
		else if (path[sr][sc] == 'D') sr--;
		else if (path[sr][sc] == 'R') sc--;
		else if (path[sr][sc] == 'L') sc++;
	}

	if (found) {
		cout << "YES" << endl;
		cout << sz(ans) << endl;
		for (auto it : ans) cout << it;
		cout << endl;
	}
	else cout << "NO" << endl;
}