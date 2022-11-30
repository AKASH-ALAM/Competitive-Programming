#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b, lcm, i, j;
    while(cin >> a >> b){
        
        if(b % a == 0){
            cout << "L.C.M is : " << a << endl;
        } 
        else if  (a % b == 0) {
            cout << "L.C.M is : " << b << endl;
        }
        
        else {
            int aa = a, bb = b; lcm = 1;
            for(i = 2; i <= 10; i++){
                if(aa % i == 0 && bb % i == 0){
                    aa /= i, bb /= i;
                    lcm *= i; cout << "i = " << i << " " ;
                    i--;
                }if (i==10) cout << endl;
            }
            cout << "L.C.M is : " << lcm*aa*bb << endl;
        }
        
    }
    
    return 0;
}