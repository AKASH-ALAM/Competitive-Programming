#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,j,c = 0;
    cin>>n;
    int arry[1000];
    for(i = 0; i <= 1000; i++){
        for(j = 0; j < n; j++){
            c = i + c;
            arry[c] = j;
            c++;
        }
        printf("N[%d] = %d\n",i,arry[i]);
    }
}
