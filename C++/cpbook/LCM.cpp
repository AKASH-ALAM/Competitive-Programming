#include <iostream>
#define endl '\n'
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int a , b, temp, lcm = 0;
        cin>>a>>b;
        if(b > a){
            temp = a;
            a = b;
            b = temp;
        }
        if(a % b == 0) lcm = a;
        else{
            for(int i = 2; i < a; i++){
                if((b*i) % a == 0){
                    lcm = b * i;
                    break;
                }
            }
        }
        cout<<"LCM = "<<lcm<<endl;
    }
    return 0;
}