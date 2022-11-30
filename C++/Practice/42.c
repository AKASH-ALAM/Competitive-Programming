#include<stdio.h>
#include<string.h>
int main(){   
    int t;
    scanf("%d",&t);
    while(t--){
        char s[128],ss[128];
        scanf("%s%s",s,ss);
        char *p = s;
        int total=0;
        while ( (p=strstr(p,ss)) != NULL ){
            total++;
            p++;
        }
        printf("%d\n",total);
    }
    return 0;
}