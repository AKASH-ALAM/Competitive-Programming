/* #include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int p,q,c;
        cin>>p>>q>>c;
        unsigned long long mod = pow(p,q),result;   //not enough :(
        result = mod % c;
        cout<<"Result = "<<result<<endl;
    }
    return 0;
} */

#include <iostream>
using namespace std;
int main(){
    int t;  cin>>t;
    while(t--){
        int p, q, c, tmp = 1;
        cin>>p>>q>>c;
        for(int i = 1; i <= q; i++){
            tmp = (tmp * p) % c;ত [ঃ]
        }
        cout<<"Result = "<<tmp<<endl;
    }
    return 0;
}