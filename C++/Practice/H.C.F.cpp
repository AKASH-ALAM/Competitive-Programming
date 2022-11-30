#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b; cin >> a >> b;
    if(a > b){
        int tmp = a;
        a = b;
        b = tmp;
    }
    int hcf = 0;
    for(int i = 1; i <= a; i++){
        if(a % i == 0 && b % i == 0){
            if(i > hcf) hcf = i;
        }
    } cout << "So The H.C.F is : " << hcf << endl;
    return 0;
}