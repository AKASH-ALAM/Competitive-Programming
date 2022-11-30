#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n1, n2, divisor,divident,remainder;
        cin>>n1>>n2;
        if(n1 > n2){
           divisor = n2;
           divident = n1;
        }
        if(n1 < n2){
            divisor = n1;
            divident = n2;
        }
        remainder = divident % divisor;
        while(remainder != 0){
            divident = divisor;
            divisor = remainder;
            remainder = divident % divisor;
        }
        int gcd = divisor;
        int lcd = n1 * n2 / gcd;
        cout<<"LCD = "<<lcd<<endl;
        
    }
    return 0;
}