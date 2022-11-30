#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char a,b,c;
        scanf(" %c %c %c",&a,&b,&c);
        int sum = a + b + c;
        printf("%d\n",sum);
    }
    return 0;   
} 