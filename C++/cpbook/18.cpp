#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int cake,tray_h,tray_w;
        cin>>cake>>tray_h>>tray_w;
        int temp = cake * 2;
        if(temp <= tray_h && temp <= tray_w){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}