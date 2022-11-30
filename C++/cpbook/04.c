#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int d,p,h;
        scanf("%d %d %d",&d,&p,&h);
        int area = d * p * h;
        printf("%d\n",area);
    }
    return 0;
}