#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,j,m = 4,c=1;
    cin>>n;
    for(i = 0; i < n ; i++){
        for( j = c; j < m; j++){
            cout<<j<<" ";
        }
        cout<<"PUM"<<endl;
        c = m + 1;
        m = m + 4;
    }
}
