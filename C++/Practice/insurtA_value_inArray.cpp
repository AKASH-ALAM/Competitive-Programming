#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,p,value;
    cout<<"Input Array size: ";
    cin>>n;
    int arry[100];
    cout<<"Input Array value: ";
    for(i = 0; i < n; i++){
        cin>>arry[i];
    }
    cout<<"Input Position: ";
    cin>>p;
    p--;
    cout<<"Input Value: ";
    cin>>value;
    for(i = n - 1; i >= p ; i--){
        arry[i+1] = arry[i];
    }
    arry[p] = value;
    cout<<"Your Array is: ";
    for(i = 0; i < n+1; i++){
        cout<<arry[i]<<" ";
    }
    cout<<endl;
}
