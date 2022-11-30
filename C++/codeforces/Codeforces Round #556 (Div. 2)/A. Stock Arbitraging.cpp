#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m , r, tmp_r;
    cin >> n >> m >> r;
    tmp_r = r;
    int *buy = (int *) malloc (sizeof(int) * n);
    int *sell = (int *) malloc (sizeof(int) * m);

    int sm = 0, bg = 0;
    for(int i = 0; i < n; i++) {
        cin >> buy[i];
    }
    sort(buy, buy+n);
    sm = buy[0];
    for(int i = 0; i < m; i++) {
        cin >> sell[i];
        if(sell[i] > bg) {
            bg = sell[i];
        }
    }
    //cout << sm << " " << bg << endl;
    int buy_s = r / sm;
    r = r % sm;
    int bourles = (buy_s * bg) + r;
    if(bourles > tmp_r) cout << bourles << endl;
    else cout << tmp_r << endl;
    return 0;
}