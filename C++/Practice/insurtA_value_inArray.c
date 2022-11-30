#include<stdio.h>
int main(){
    int n,i,p,value;
    printf("Input Array size: ");
    scanf("%d",&n);
    int arry[100];
    printf("Input Array value: ");
    for(i = 0; i < n; i++){
        scanf("%d",&arry[i]);
    }
    printf("Input Position: ");
    scanf("%d",&p);
    p--;
    printf("Input Value: ");
    scanf("%d",&value);
    for(i = n - 1; i >= p ; i--){
        arry[i+1] = arry[i];
    }
    arry[p] = value;
    printf("Your Array is: ");
    for(i = 0; i < n+1; i++){
        printf("%d ",arry[i]);
    }
    printf("\n");
}
