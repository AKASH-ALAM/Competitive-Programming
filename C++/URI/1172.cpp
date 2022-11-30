#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,arry[10];
    for(i = 0; i<10; i++){
        cin>>arry[i];
    }
    for(i = 0; i < 10; i++){
        if(arry[i] <= 0){
            arry[i] = 1;
        }
        printf("X[%d] = %d\n",i,arry[i]);

    }

}
