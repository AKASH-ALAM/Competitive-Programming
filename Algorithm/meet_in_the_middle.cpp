// n <= 50, O(2^(n/2))
for (int mask = 0; mask < (1 << n / 2); mask++) {
    int sum = 0;
    for (int i = 0; i < n / 2; i++) {
        if (mask & (1 << i)) sum += v[i];
    }
    ans.push_back(sum);
}

for (int mask = 0; mask < (1 << (n - (n / 2))); mask++) {
    int sum = 0;
    for (int i = 0, j = n / 2; i < n - (n / 2); i++, j++) {
        if (mask & (1 << i)) sum += v[j];
    }
    ans.push_back(sum);
}