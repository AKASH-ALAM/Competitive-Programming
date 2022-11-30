#include<iostream>
using namespace std;
int main(){
    int t, j = 1;
    cin>>t;
    while(j <= t){
        int n,i,check = 1;
        cin>>n;
        int arry[n];
        for(i = 0; i < n; i++){
            cin>>arry[i];
        }
        cout<<"Case "<<j<<": ";
        for(i = 0; i < n; i++){
            if(arry[i] + 1 == arry[i+1]){
                check = 0;
                break;
            }
            else{
                check = 1;
            }
            
        }
        if(check == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        j++;
    }
    return 0;
}