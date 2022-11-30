#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, sum = 0; cin >> n;
    int tmp;
    while(n--){
        int j = 0;
        for(int i = 0; i < 3; i++){
            cin >> tmp;
            if(tmp == 1){
                j++;
                if(j == 2){
                    sum++;
                }
            }
        }
    } cout << sum << endl;

    return 0;
}