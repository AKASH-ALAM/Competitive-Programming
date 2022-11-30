#include<stdio.h>

int main(){
    //freopen("output.txt", "w", stdout);
    int a,b, rem = 1, gcd;
    scanf("%d %d", &a,&b);
    while(rem != 0){
        rem = b % a;
        if(rem == 0) gcd = a;
        b = a;
        a = rem;
    }
    printf("GCD = %d\n", gcd);
    return 0;
}