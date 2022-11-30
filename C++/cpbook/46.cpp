#include<iostream>
using namespace std;
int main(){
    int t,i, j = 1;
    cin>>t;
    while(j <= t){
        int s,a[100];
        cin>>s;
        for(i = 0; i < s; i++){
            cin>>a[i];
        }
        cout<<"Set "<<j<<": "<<a[0]<<" ";
        for(i = 2; i < s; i = i + 2){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        j++;
    }
    return 0;
}