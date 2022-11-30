#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,sum = 0;
    cin>>n>>m;
    if(n < 0){
        n = n * (-1);
    }
    if(m < 0){
        m = m * (-1);
    }
    if(n < m){
        for(int i = n+1; i < m; i++){
            if(i % 2 != 0){
                sum += i;
            }
        }
    }
    else{
        for(int i = m+1; i < n; i++){
            if(i % 2 != 0){
                sum += i;
            }
        }
    }
    cout<<sum<<endl;

}

