#include <iostream>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        int arry[n], i;
        for(i = 0; i < n; i++) cin>>arry[i];
        for(i = 0; i < n; i+= 2) cout<<arry[i]<<" ";
        cout<<endl;
    }
    return 0;
}