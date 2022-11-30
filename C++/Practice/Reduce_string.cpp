#include<bits/stdc++.h>
using namespace std;
int main(){
    char stry[101];
    int n,i,j;
    cin>>n;
    while(n--){
        for(i = 0; i <= 100; i++){
            stry[i] = 0;
        }
        int count = 0;
        cin>>stry;
        for(i = 0; i <= 100; i++){
           if(stry[i] != 0){
               count++;
           }
        }
        if(count > 10){
           int m = count - 2;
           cout<<stry[0]<<m<<stry[count-1]<<endl;    
        }
        else{
            cout<<stry<<endl;
        }
    }
}