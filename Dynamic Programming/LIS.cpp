void solve() {
    int n;  cin >> n;
    vector <int> v;
    for (int i = 0; i < n; i++) {
        int in; cin >> in;
        auto idx = lower_bound(all(v), in);
        if (idx != v.end()) v[idx - v.begin()] = in;
        else v.push_back(in);
    }
    cout << sz(v) << endl;
}