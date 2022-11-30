#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,c=1;
    cin>>n;
    for(i = 1; i <= n; i++){
        c = c * i;
    }
    cout<<c<<endl;
}