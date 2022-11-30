#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,x;
    cin>>n;
    int arry[10];
    arry[0] = n;
    for(i = 1; i < 10; i++){
        n = n + n;
        arry[i] = n;
    }
    for(i = 0; i < 10; i++){
        printf("N[%d] = %d\n",i,arry[i]);
    }
}
