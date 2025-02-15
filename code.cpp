#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1e9 + 9;
const int BASE = 37;

// Function to compute power for rolling hash
int power(int base, int exp, int mod) {
    int res = 1;
    while (exp > 0) {
        if (exp % 2) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

// Booth’s Algorithm to find the smallest lexicographical cyclic rotation in O(M)
vector<int> getMinCyclicRotation(vector<int> B) {
    int M = B.size();
    vector<int> BB = B;
    BB.insert(BB.end(), B.begin(), B.end()); // Duplicate array to simulate cyclic shifts
    int N = BB.size();
    
    vector<int> f(N, -1);
    int k = 0; // Index of the lexicographically minimal rotation
    
    for (int j = 1; j < N; j++) {
        int i = f[j - k - 1];
        while (i != -1 && BB[j] != BB[k + i + 1]) {
            if (BB[j] < BB[k + i + 1]) k = j - i - 1;
            i = f[i];
        }
        if (BB[j] != BB[k + i + 1]) {
            if (BB[j] < BB[k]) k = j;
            f[j - k] = -1;
        } else {
            f[j - k] = i + 1;
        }
    }
    
    return vector<int>(BB.begin() + k, BB.begin() + k + M); // Return best cyclic rotation
}

void solve() {
    int N, M;
    cin >> N >> M;
    
    vector<int> A(N), B(M);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < M; i++) cin >> B[i];

    // Get the smallest cyclic rotation of B
    vector<int> bestB = getMinCyclicRotation(B);

    // Compute rolling hash of B for quick comparison
    int B_hash = 0, window_hash = 0, powerM = power(BASE, M - 1, MOD);
    for (int i = 0; i < M; i++) {
        B_hash = (B_hash * BASE + bestB[i]) % MOD;
        window_hash = (window_hash * BASE + A[i]) % MOD;
    }

    // Use rolling hash to check windows efficiently
    for (int i = 0; i <= N - M; i++) {
        // Compare actual values if hash matches
        vector<int> window(A.begin() + i, A.begin() + i + M);
        if (window > bestB) { // Lexicographical comparison
            copy(bestB.begin(), bestB.end(), A.begin() + i);
        }

        // Rolling hash update
        if (i < N - M) {
            window_hash = (window_hash - A[i] * powerM % MOD + MOD) % MOD;
            window_hash = (window_hash * BASE + A[i + M]) % MOD;
        }
    }

    // Print the result
    for (int i = 0; i < N; i++) cout << A[i] << " ";
    cout << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
