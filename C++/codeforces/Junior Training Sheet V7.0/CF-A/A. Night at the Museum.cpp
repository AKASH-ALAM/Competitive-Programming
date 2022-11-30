#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    string s; cin >> s;
    //this code is not mine. :(
    int r = 0, d, flag = 97;
    for(int i = 0; i < s.length(); i++){
        d = abs(flag - s[i]);
        if(d > 13){
            d = 26 - d;
        }
        r += d;
        flag = s[i];
    } cout << r << endl;

    return 0;
}