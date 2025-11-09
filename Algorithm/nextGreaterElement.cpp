
void solve() {
	int n;	cin >> n;
	int a[n + 1], ans[n]; for (int i = 1; i <= n; i++) cin >> a[i];
	stack <int> s;

	for (int i = n; i >= 0; i--) { // we iterate from right to left
		while (!s.empty() and s.top() <= a[i]) s.pop();
		if (s.empty()) ans[i] = -1;
		else ans[i] = s.top();
		s.push(a[i]);
	}

	for (int i = 1; i <= n; i++) cout << ans[i] << " \n"[i == n];
}