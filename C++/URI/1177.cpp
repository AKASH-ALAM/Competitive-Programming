#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,j,N[1000];
    cin>>n;
    for(i = 0,j = 0; i < 1000; i++){
        printf("N[%d] = %d\n",i,j);
        j++;
        if(n == j)
            j = 0;
    }
    return 0;
}
