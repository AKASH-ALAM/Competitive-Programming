#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,m,n,c=0,s;
    cin>>m>>n;
    if(m <= 0 || n <= 0){
        return 0;
    }
    else if(m > n){
        s = n;
        n = m;
        m = s;
    }
        for(i = m; i <= n; i++){
            c = c + i;
            cout<<i<<" ";
    }
    cout<<"Sum="<<c<<endl;
    c = 0;
}
