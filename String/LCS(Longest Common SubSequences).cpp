//Print length =  O(MxN)
int LCS(int i, int j, string &a, string &b, vector <vector<int>> &dp) {
	if (i < 0 or j < 0) return 0;
	if (dp[i][j] != -1) return dp[i][j];
	if (a[i] == b[j])   return dp[i][j] = 1 + LCS(i - 1, j - 1, a, b, dp);
	return dp[i][j] = max(LCS(i - 1, j, a, b, dp), LCS(i, j - 1, a, b, dp));
}

//Printing lcs using tabulation method
string lcs(string a, string b) {
	int n = sz(a), m = sz(b);
	vector <vector<int>> dp(n + 1, vector <int> (m + 1, 0)); // 1->based indexing

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (a[i - 1] == b[j - 1]) dp[i][j] = 1 + dp[i - 1][j - 1];
			else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}

	string ans = "";
	int i = n, j = m, len = dp[n][m], idx = len - 1;
	for (int i = 0; i < len; i++) ans += '$';
	//O(n + m) at the worst case
	while (i > 0 and j > 0) {
		if (a[i - 1] == b[j - 1]) {
			ans[idx--] = a[i - 1];
			i--, j--;
		}
		else if (dp[i - 1][j] > dp[i][j - 1]) i--;
		else j--;
	}
	return ans;
}

//Another way
const int N = 1e3;

string a, b;   
int dp[N][N];
int path[N][N];

int f(int i, int j){
   if(i == sz(a) or j == sz(b)) return 0;
   if(dp[i][j] != -1) return dp[i][j];

   if(a[i] == b[j]) {
      path[i][j] = 1;
      return dp[i][j] =  1 + f(i+1, j+1);
   }
   int one = f(i+1, j);
   int two = f(i, j+1);

   if(one > two) path[i][j] = 2;
   else path[i][j] = 3;

   return dp[i][j] = max(one, two);
}

void print(int i, int j){
   if(i == sz(a) or j == sz(b)) return;
   if(path[i][j] == 1) {
      cout << a[i];
      print(i+1, j+1);
   }  
   else if(path[i][j] == 2) print(i+1, j);
   else print(i, j+1);
}

void solve() {
   cin >> a >> b;
   mem(dp, -1);

   cout << f(0, 0) << endl;

   print(0, 0);
}