#include<iostream>
using namespace std;
int main(){
    int i,t;
    cin>>t;
    while(t--){
        int fac;
        long long f = 1;
        cin>>fac;
        for(i = 1; i <= fac; i++){
            f = f * i;
        }
        cout<<f<<endl;
    }
    return 0;
}