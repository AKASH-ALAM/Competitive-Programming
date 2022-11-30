#include<stdio.h>
#include<string.h>
int main(){
    char str[100] = "mesbahul alam akash";
    int base, address;
    base = (int) (str);
    address = (int) strchr(str,'k');
    printf("%d\n",address-base+1);
    return 0;

}
