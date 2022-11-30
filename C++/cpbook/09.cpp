#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int i,t,c,n;
    cin>>t;
    while(t--){
        cin>>n;
        int arry[n];
        float c = 0;
        for(i = 0; i < n; i++){
            cin>>arry[i];
        }
        for(i = 0; i < n; i++){
            c = c + arry[i];
        }
        printf("%.2f\n",c/n);
    }
    return 0;
}