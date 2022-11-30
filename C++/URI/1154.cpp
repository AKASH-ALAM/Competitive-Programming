#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i = 0;
    float c = 0;
    while(cin>>n){
        if(n < 0){
            break;
        }
        c = c + n;
        i++;
    }
    cout<<fixed<<setprecision(2)<<c/i<<endl;
}