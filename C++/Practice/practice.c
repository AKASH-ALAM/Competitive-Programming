#include<stdio.h>
int main(){
    int i,j,n;
    int arry[101];
    for(i = 0; i < 101; i++){
        arry[i] = 0;
    }
    for(i = 0; i < 101; i+=2){
        arry[i] = 1;
    }
    scanf("%d",&n);
    if(arry[n]){
        printf("%d is even number.\n",n);
    }
    else{
        printf("%d is odd number.\n");
    }
}
