const int N = 1e6 + 5;
int fact[N];

void fact_count() {
    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j += i) fact[j]++;
    }
}
