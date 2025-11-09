//O(2^n)
void subset() {
    vector <int> v = { 1, 2, 3};
    for (int mask = 0; mask < (1 << v.size()); mask++) {
        for (int i = 0; i < v.size(); i++) {
            if (mask & (1 << i)) {
                cout << v[i] << ' ';
            }
        } cout << endl;
    }
}

