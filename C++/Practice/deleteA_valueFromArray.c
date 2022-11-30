#include<stdio.h>
int main()
{
    int n,i,p;
    printf("Input Array size: ");
    scanf("%d",&n);
    int arry[n];
    printf("Input Array value: ");
    for(i = 0; i < n; i++){
        scanf("%d",&arry[i]);
    }
    printf("Input Position: ");
    scanf("%d",&p);
    p--;
    for(i = p; i < n; i++){
        arry[i] = arry[i+1];
    }
    printf("Your array is:  ");
    for(i = 0; i < n-1; i++){
        printf("%d ",arry[i]);
    }
    printf("\n");
}
