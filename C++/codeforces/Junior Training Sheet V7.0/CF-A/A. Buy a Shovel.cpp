#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main(){
    int k, r; cin >> k >> r;
    int a, i = 1, total;
    while(1){
        if((i * k) % 10 == 0) break;
        else{
            total = i * k;
            a = ((total / 10) * 10) + r;
            if(total == a) break;
        }
        i++;
    } cout << i << endl;
    return 0;
}