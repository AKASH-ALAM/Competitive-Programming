#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p;
    cout<<"Input Array size: ";
    cin>>n;
    int arry[n];
    cout<<"Input Array value: ";
    for(i = 0; i < n; i++){
        cin>>arry[i];
    }
    cout<<"Input Position: ";
    cin>>p;
    p--;
    for(i = p; i < n; i++){
        arry[i] = arry[i+1];
    }
    cout<<"Your array is:  ";
    for(i = 0; i < n-1; i++){
        cout<<arry[i]<<" ";
    }
    cout<<endl;
}
