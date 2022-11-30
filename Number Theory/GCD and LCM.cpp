#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    return b == 0 ? a : GCD(b , a % b);
}

int LCM(int a, int b){
    return (a / GCD(a, b)) * b;
}
int main(){
    int a, b;   cin >> a >> b;
    cout << "GCD is : " << GCD(a, b) << endl;
    cout << "LCM is : " << LCM(a, b) << endl;

    return 0;
}