const int N = 1e6;
vector <int> fact[N];

void pre_fact() {
    for (int i = 2; i < N; i++) {
        for (int j = i; j < N; j += i) fact[j].push_back(i);
    }
}