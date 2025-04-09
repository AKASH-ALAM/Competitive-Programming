#include <bits/stdc++.h>
using namespace std;

const int MAXN = 700;
int grid[MAXN][MAXN];

void solve() {
    int n, m;
    cin >> n >> m;

    map<int, int> color_count[2]; // Two maps for two disjoint groups

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
            color_count[(i + j) % 2][grid[i][j]]++;
        }
    }

    // Function to get the two most frequent colors in a group
    auto get_top_two = [](map<int, int>& cnt) {
        pair<int, int> top1 = {0, -1}, top2 = {0, -1}; // (freq, color)
        for (auto &[color, freq] : cnt) {
            if (freq > top1.first) {
                top2 = top1;
                top1 = {freq, color};
            } else if (freq > top2.first) {
                top2 = {freq, color};
            }
        }
        return make_pair(top1, top2);
    };

    // Get most common and second most common colors in both groups
    auto [group1_top1, group1_top2] = get_top_two(color_count[0]);
    auto [group2_top1, group2_top2] = get_top_two(color_count[1]);

    int total_cells = n * m;
    int max_paintable;

    if (group1_top1.second != group2_top1.second) {
        // If the most frequent colors in both groups are different, we use them
        max_paintable = group1_top1.first + group2_top1.first;
    } else {
        // If both groups have the same most frequent color, we choose the second-best option
        max_paintable = max(group1_top1.first + group2_top2.first, group1_top2.first + group2_top1.first);
    }

    cout << (total_cells - max_paintable) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
