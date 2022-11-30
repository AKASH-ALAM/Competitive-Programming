#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int arry[n], tmp;

    for(int i = 0; i < n; i++){
        cin >> arry[i];
    }

    int i = 0, j = 0;

    for(i = 0; i < n; i++){
        for(j = 0; j < n-1; j++){
            if(arry[j] > arry[j+1]){
                tmp = arry[j];
                arry[j] = arry[j+1];
                arry[j+1] = tmp;
            }
        }
    }

    for(i = 0; i < n; i++) {
        cout << arry[i] << " ";
    } cout << endl;

    return 0;

    //problem tag: greedy    implementation    sortings   
}