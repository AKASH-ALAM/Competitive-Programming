/* #include <bits/stdc++.h>
using namespace std;

int is_max(int a, int b){
    return a > b ? a : b;
}

int main(){
    int m;  cin >> m;
    int **a = new int*[m*2-1];
    for(int i = 0; i < m*2-1 ; i++) a[i] = new int[m];

    int i = 0, j = 0, temp_i = i, t = 1, tmp = a[0][0];

    for(i = 0; i < m*2-1; i++){
        if(i < 4){
            for(j = 0; j <= i; j++)  cin >> a[i][j];
        } else {
            temp_i = i - t, t += 2;
            for(j = 0; j < temp_i; j++) cin >> a[i][j];
        }
    } 
    int two = 2;
    while(two--){
        for(j = 2, i = 0; j < m*2-1; j++){
             if(i < 4){
                 if(a[j][i] < a[j][i+1]){
                     tmp += 
                 }
             }
        }
    }
    

    for(int i = 0; i < m*2-1; i++) {
        delete[] a[i];
    } delete[] a;
        
    
    return 0;
    unsolved :(
} */
// incomplite solution! please don't submit this code :(