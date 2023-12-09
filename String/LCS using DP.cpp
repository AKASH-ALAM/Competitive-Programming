//Print length =  O(MxN)
int LCS(int i, int j, string &a, string &b, vector <vector<int>> &dp) {
	if (i < 0 or j < 0) return 0;
	if (dp[i][j] != -1) return dp[i][j];
	if (a[i] == b[j])   return dp[i][j] = 1 + LCS(i - 1, j - 1, a, b, dp);
	return dp[i][j] = max(LCS(i - 1, j, a, b, dp), LCS(i, j - 1, a, b, dp));
}

//Printing lcs
int lcs(int i, int j, string &a, string &b, vector <vector<int>> &dp) {
	if (i < 0 or j < 0) return 0;
	if (dp[i + 1][j + 1] != -1) return dp[i + 1][j + 1];
	if (a[i] == b[j]) return dp[i + 1][j + 1] = 1 + lcs(i - 1, j - 1, a, b, dp);
	return dp[i + 1][j + 1] = max(lcs(i - 1, j, a, b, dp), lcs(i, j - 1, a, b, dp));
}

void solve() {
	string a, b;
	cin >> a >> b;

	int n = sz(a), m = sz(b);
	vector <vector<int>> dp(n + 1, vector <int> (m + 1, -1)); // 1->based indexing

	int cnt = lcs(n - 1, m - 1, a, b, dp);

	string ans = "";
	for (int i = 0; i < cnt; i++) ans += '$';
	int i = n, j = m, idx = cnt - 1;

	while (i > 0 and j > 0) {
		if (a[i - 1] == b[j - 1]) {
			ans[idx] = a[i - 1];
			idx--;
			i--, j--;
		}
		else if (dp[i - 1][j] > dp[i][j - 1]) i--;
		else j--;
	}

	cout << ans << endl;
}