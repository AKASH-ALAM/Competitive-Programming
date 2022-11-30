#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arry[5][5], i, j;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            cin >> arry[i][j];
        }
    }
    int row = 0, clmn = 0;
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(arry[i][j] == 1){
                row = i + 1;
                clmn = j + 1;
            }
        } 
    }

    if(row > 3){
        row = row - 3;
    } else{
        row = 3 - row;
    }

    if(clmn > 3){
        clmn = clmn - 3;
    } else {
        clmn = 3 - clmn;
    }
    
    cout << row + clmn << endl;
    return 0;
}
//problem tag : implementation;