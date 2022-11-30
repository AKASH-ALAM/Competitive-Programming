#include<iostream>
using namespace std;
int main(){
    int t,i,j;
    cin>>t;
    while(t--){
        int x,n;
        cin>>x>>n;
        for(i = 0; i < x; i++){
            for(j = 0; j <= i; j++){
                cout<<n;
            }
            cout<<endl;
        }
        x = x - 1;
        for(i = x; i > 0; i--){
            for(j = 0; j < i; j++){
                cout<<n;
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}