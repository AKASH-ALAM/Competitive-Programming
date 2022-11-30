#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,c = 0, o = 0;
    cin>>t;
    int arry[t];
    for(i = 0; i < t; i++){
        cin>>arry[i];
    }
    for(i = 0; i < t; i++){
        if(arry[i] >= 10 && arry[i] <= 20)
            c++;
        else
            o++;
    }
    cout<<c<<" in"<<endl<<o<<" out"<<endl;
}