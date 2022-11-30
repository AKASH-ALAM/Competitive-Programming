#include <iostream> 
using namespace std;

int main(){
    int t; cin >> t;
    int a, b, c, d;
    while(t--){
        cin >> a >> b >> c >> d;

        if(a + c > b + d){
            cout << "1" << endl;
        } else if(b + d > a + c){
            cout << "2" << endl;
        } else if(b+d == a+c) {
            cout << "-1" << endl;
        }
    }
    return 0;
}
