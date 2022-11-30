#include<iostream>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    for(i = 1; i <= t; i++){
        int a[3],sm,md,bg,j,k;
        for(k = 0; k < 3; k++){
            cin>>a[k];
        }
        sm = a[0],md = a[0],bg = a[0];
        for(j = 1; j < 3; j++){
            if(sm > a[j]){
                sm = a[j];
            }
        }
        for(j = 1; j < 3; j++){
            if(bg < a[j]){
                bg = a[j];
            }
        }
        for(j = 1; j < 3; j++){
            if(sm < a[j] && a[j] < bg){
                md = a[j];
            }
        }
        cout<<"Case "<<i<<": "<<sm<<" "<<md<<" "<<bg<<endl;
    }
    return 0;
}
