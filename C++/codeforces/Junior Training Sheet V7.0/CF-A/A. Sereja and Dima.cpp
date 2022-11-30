#include <bits/stdc++.h>
using namespace std;

/* int big_one(int a, int b){
    if(a > b) return a;
    else return b;
} */

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int arry[n];
    for(int i = 0; i < n; i++){
        cin >> arry[i];
    }
    int s = 0, d = 0, i = 0, j = n -1;
    int flag1 = 1, big;
    while(n--){
        if(arry[i] < arry[j]){
            big = arry[j];
            j--;
        } else {
            big = arry[i];
            i++;
        }

        if(flag1){
            s += big;
            flag1 = 0;
        } else {
            d += big;
            flag1 = 1;
        }

    } cout << s << " " << d << endl;

    return 0;
}