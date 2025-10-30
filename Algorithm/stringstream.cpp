
void solve() {
	string s;
	set <string> st;
	while (getline(cin, s)) {
		for (int i = 0; i < s.size(); i++) {
			if (!isalpha(s[i])) s[i] = ' ';
			else s[i] = tolower(s[i]);
		}

		stringstream ss(s);
		string out;
		while (ss >> out) st.insert(out);

	}

	for (auto i : st) cout << i << endl;
}
