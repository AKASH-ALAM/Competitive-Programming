#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,arry[101],j,c = 0,i,k,o;
    cin>>n>>m;
    for(i = 1,j = 0; i <= n; i = i+2,j++){
        arry[j] = i;
        c++;
    }
    for(i = 2,j = c; i <= n; i = i+2,j++){
        arry[j] = i;
    }
    cout<<arry[m-1]<<endl;
}