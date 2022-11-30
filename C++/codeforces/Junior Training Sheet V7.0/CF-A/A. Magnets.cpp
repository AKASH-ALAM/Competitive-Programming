#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int i = 0, n; cin >> n;
    int arry[n], count = 0;
    while(i < n){
        cin >> arry[i];
        i++;
    }

    for(int i = 0; i < n; i++){
        if((arry[i] == 10 && arry[i+1] == 1) || (arry[i] == 1 && arry[i+1] == 10)){
            count++;
        } else if((arry[i] == 10 && arry[i+1] != 1 && arry[i+1] != 10) || (arry[i] == 1 && arry[i+1] != 10 && arry[i+1] != 1)){
            count++;
        } 
    } 
    cout << count << endl;

    
    return 0;
}