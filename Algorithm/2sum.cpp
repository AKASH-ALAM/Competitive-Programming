
void solve() {
	int n, target;   cin >> n >> target;
	int a[n];   for (int i = 0; i < n; i++) cin >> a[i];

	int cnt = 0;
	map <int, int> freq;
	for (int i = 0; i < n; i++) {
		int need =  target - a[i];
		cnt += freq[need];
		freq[a[i]]++;
	}

	cout << cnt << endl;
}