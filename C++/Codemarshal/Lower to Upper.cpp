#include<stdio.h>
#include<string.h>
int main(){
    int t, j = 1;
    scanf("%d",&t);
    getchar();
    while(j <= t){
        int i;
        char s[100];
        gets(s);
        printf("Case %d: ",j);
        for(i = 0; i < strlen(s); i++){
           if(s[i] >= 'a' && s[i] <= 'z'){
                s[i] = 'A' + (s[i] - 'a');
                printf("%c",s[i]);
            }
            else{
                printf("%c",s[i]);
            }
        }
        j++;
        printf("\n");
    }
    return 0;
}
