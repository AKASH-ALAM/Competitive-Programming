#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    double n,arry[100];
    cin>>n;
    arry[0] = n;
    printf("N[0] = %.4lf\n",arry[0]);
    for(i = 1; i < 100; i++){
        n = n / 2;
        arry[i] = n;
    } 
    for(i = 1; i<100; i++){
        printf("N[%d] = %.4lf\n",i,arry[i]);
    }
    return 0;
}