#include <iostream>
using namespace std;
int main(){
    int n, digit = 0;
    cin >> n; 
    while(n != 0){
        digit = (digit * 10) + (n % 10);
        n = n / 10;
    }
    cout << digit << endl;
    return 0;
}