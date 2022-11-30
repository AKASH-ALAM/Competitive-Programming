#include <iostream>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, result = 0;
    cin >> n;
    if(n <= 0){
        for(int i = n; i <= 0; i++){
            result += i;
        }
        cout << result + 1 << endl;
    } 
    else 
        cout << (n*(n+1))/2 << endl;
    return 0;
}