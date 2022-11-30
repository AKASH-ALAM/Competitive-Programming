#include<iostream>
using namespace std;
int main(){
    int i,t,j;
    cin>>t; 
    for(j = 1; j <= t; j++){
        int x,n,m;
        cin>>x>>n;
        cout<<"Case "<<j<<": ";
        for(i = 1; i <= n; i++){
            m = x * i;
            if(m > n){
                break;
            }
            cout<<m<<" ";
        }
        cout<<endl;
    }
    return 0;
}