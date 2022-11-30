#include<iostream>
using namespace std;
int main(){
    int t,j,i;
    cin>>t;
    for(i = 1; i <= t; i++){
        int n;
        cin>>n;
        cout<<"Case "<<i<<": ";
        for(j = 1; j <= n; j++){
            if(n % j == 0){
                cout<<j;
                if(j != n){
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
    return 0;
}