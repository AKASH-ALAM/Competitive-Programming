#include<stdio.h>
#include<string.h>
int main(){
    char str[128],str2[128];
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%s%s",str,str2);
        int base, address;
        base = (int) (str);
        address = (int) strstr(str,str2);
        printf("%d\n",address-base);
    }
    return 0;
}
