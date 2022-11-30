#include<iostream>
using namespace std;
int main(){
    int i,t;
    cin>>t;
    while(t--){
        int a[25],n,sm,bg,check = 0;
        cin>>n;
        for(i = 0; i < n; i++){
            cin>>a[i];
        }
        sm = a[0];
        bg = a[0];
        for(i = 1; i < n; i++){
            if(a[0] < a[1]){
                if(sm < a[i]){
                    sm = a[i];
                    check = 0;
                }
                else{
                    check = 1;
                    break;
                }
            }
            else if(a[0] > a[1]){
                if(bg > a[i]){
                    bg = a[i];
                    check = 0;
                }
                else{
                    check = 1;
                    break;
                }
            }
        }
        if(check == 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}