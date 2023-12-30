for (int i = 0; i < sz(s); i++) {
	for (int j = 1; j < sz(s) - i + 1; j++) {
		cout << s.substr(i, j) << endl;
	}
}