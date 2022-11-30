#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    for(int i = 1; i <= t; i++) {
        int length[3];
        for(int j = 0; j < 3; j++) cin >> length[j];
        sort(length, length+3);
        length[0] = sqrt((length[0] * length[0]) + (length[1] * length[1]));
        if(length[0] == length[2]) cout << "Case " << i << ": yes" << endl;
        else cout << "Case " << i << ": no" << endl; 
    } return 0;
}