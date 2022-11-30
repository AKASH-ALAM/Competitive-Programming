#include <iostream> 
using namespace std;

int main(){
    int a, b, t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> a >> b;
        cout << "Case "<< i << ": " << a + b << endl; 
    }
    return 0;
}