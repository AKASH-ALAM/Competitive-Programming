#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t,i;
    cin>>t;
    while(t--){
        cin>>n;
        if(n == 0){
            cout<<"NULL"<<endl;
        }
        if(n < 0 ){
            if(n % 2 == 0){
                cout<<"EVEN NEGATIVE"<<endl;
            }
            else{
                cout<<"ODD NEGATIVE"<<endl;
            }
        }
        else if(n > 0){
            if(n % 2 == 0){
                cout<<"EVEN POSITIVE"<<endl;
            }
            else{
                cout<<"ODD POSITIVE"<<endl;
            }
        }
    }
}
