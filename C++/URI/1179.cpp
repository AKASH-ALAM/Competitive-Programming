#include<bits/stdc++.h>
using namespace std;
int main(){
    int k, m = 0;
    int i,n[15],j;
    float par[15];
    for(i = 0; i < 15; i++){
        cin>>n[i];
       par[i] = 1.5;
    }
    for(i = 0,k = 0;i < 15; i++){
        if(n[i] % 2 == 0){
            par[k] = n[i];
            k++;
        }
    }
    for(i = 0,j = 0; i < 5; i++){
        if(par[i] != 1.5){
            printf("par[%d] = %.0f\n",j,par[i]);
            j++;
            if(j == 5)
                m = 1;
               // break;
        }
    }
    for(i = 0,j = 0;i < 15; i++){
        if(n[i] % 2 != 0){
            printf("impar[%d] = %d\n",j,n[i]); 
            j++;
            if(j==5)
                j = 0;
        }
    }
    for(i = 5,j = 0; i < 15; i++){
        if(m == 1 && par[i] != 1.5){
            printf("par[%d] = %.0f\n",j,par[i]);
            j++;
            if(j == 5)
                j=0;
        }
    }
}