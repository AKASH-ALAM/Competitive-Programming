#include<iostream>
using namespace std;
int main(){
    int t,i,j = 1;
    cin>>t;
    int m = t;
    while(t--){
        int n;
        cin>>n;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                cout<<"*";
            }
            cout<<endl;
        }
        if(t > 0)
            cout<<endl;
    }
    return 0;
}