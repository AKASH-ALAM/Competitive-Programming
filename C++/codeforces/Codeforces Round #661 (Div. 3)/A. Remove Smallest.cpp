#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n;  cin >> n;
        int array[n];

        for(int i = 0; i < n; i++){
            cin >> array[i];
        }
 
        sort(array, array+n);
        bool flag = true;

        for(int i = 0; i < n-1; i++){
            if((array[i+1]) - array[i] <= 1){
                continue;
            } else {
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}