#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(a > b and a > c){
        if(b > c) cout << b << endl;
        else cout << c << endl;
    }
    else if(b > a and b > c){
        if(a > c) cout << a << endl;
        else cout << c << endl;
    }   else{
        if(a > b) cout << a << endl;
        else cout << b << endl;
    }
    
    return 0;
}