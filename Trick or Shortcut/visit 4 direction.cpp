
int dx[] = { -1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {  0, 0, -1, 1, -1, 1, -1, 1};

int row = 1, col = 1;

for (int i = 0; i < 4; i++) {
	int nrow = row + dx[i];
	int ncol = col + dy[i];
	cout << nrow << ' ' << ncol << endl;
}
