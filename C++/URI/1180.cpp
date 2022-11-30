#include<iostream>
using namespace std;
int main(){
    int n,j,i;
    int arry[1001];
    cin>>n;
    if(1 < n && n < 1000){
        for(i = 0; i < n; i++){
        cin>>arry[i];
        }
    }
    else{
        return 0;
    }
    int sm = arry[0];
    for(i = 1; i < n; i++){
        if(sm > arry[i]){
            sm = arry[i];
        }
    }
    for(i = 0; i < n; i++){
        if(sm == arry[i]){
        j = i;
        break;
    }
    }
    cout<<"Menor valor: "<<sm<<endl<<"Posicao: "<<j<<endl;
}
