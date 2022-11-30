#include<stdio.h>
int main(){
    int second,minute,houre,time;
    printf("Enter second: ");
    scanf("%d",&time);
    houre = time / 3600;
    minute = (time/60) % 60;
    second = time % 60;
    printf("%d houre %d minute %d second \n",houre,minute,second);
    return 0;
}