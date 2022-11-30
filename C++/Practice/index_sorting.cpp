#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arry[n],i,j;
    cout<<"Enter Array Element: ";
    for(i = 0; i < n; i++){
        cin>>arry[i];
    }
    int ch = arry[0];
    if(n == 2 && arry[0] < arry[1]){
        cout<<"yes"<<endl<<ch<<' '<<ch<<endl;
        return 0;
    }
    int sm,p;
    sm = arry[0];
        for(j = 1; j < n; j++){
            if(sm > arry[j]){
                sm = arry[j];
                p = j;
            }
        }
    arry[0] = sm;
    arry[p] = ch;
    int chack;
    for(i = 0; i < n - 1; i++){
        if(arry[i] < arry[i+1]){
            chack = 0;
        }
        else{
            chack = 1;
            break;
        }
    }
    if(chack == 0){
        cout<<"yes"<<endl<<sm<<' '<<ch<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}