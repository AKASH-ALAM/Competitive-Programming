
const int MX = 1e6 + 5;
bitset <MX> mark;
vector <int> pf[MX]; // Prime Factors

void siv() {
    for (int i = 4; i < MX; i += 2) mark[i] = 1;
    int sq = sqrt(MX);
    mark[1] = 1;

    for (int i = 3; i <= sq; i += 2) {
        if (mark[i]) continue;
        for (int j = i * i; j < MX; j += 2 * i) mark[j] = 1;
    }

    for (int prime = 2; prime < MX; prime++) {
        if (mark[prime]) continue;
        for (int multiple = prime; multiple < MX; multiple += prime) {
            pf[multiple].push_back(prime);
        }
    }
}