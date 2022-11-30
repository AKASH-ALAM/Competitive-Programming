#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        float i,j;
        float d = 1,sum = 0,mul = 0,n;
        cin>>n;
        for(i = 1; i <= n; i++){
            for(j = 1; j <= i; j++){
                d = d * j;
                if(j == i){
                    mul = i / d;
                    sum = sum + mul;
                    d = 1;
                }
            }
        }
        cout<<fixed<<setprecision(4)<<sum<<endl;
    }
    return 0;
}