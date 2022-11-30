#include<stdio.h>
#include<string.h>
int main(){
    int result;
    char a[30],b[30];
    scanf("[^\n]",a);
    scanf("[^\n]",b);
    result = strcmp(a,b);
    if(result < 0){
        printf("String A is less then B\n");
    }
    else if(result > 0){
        printf("String A is gatter then B\n");
    }
    else{
        printf("String A is equel to string B \n");
    }
}