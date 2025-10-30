//O(R)
ll nPr(int n, int r) {
	ll ans = 1;
	while (r--) ans *= n--; // use mod here
	return ans;
}