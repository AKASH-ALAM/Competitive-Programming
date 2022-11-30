#include<stdio.h>
#include<string.h>

int main()
{
    char s[1002],ch;
    int i,length,wordStarted;
    gets(s);
    length = strlen(s);
    wordStarted = 0;
    for(i = 0; i < length ; i++ ){
        if(s[i] >= 'a' && s[i] <= 'z'){
            if(wordStarted == 0){
                wordStarted = 1;
                ch = 'A' + (s[i] - 'a');
                printf("%c",ch);
                }
            else{
                printf("%c",s[i]);
            }
        }
        else if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')){
            if(wordStarted == 0){
                wordStarted = 1;
            }
            printf("%c",s[i]);
        }
        else if(wordStarted == 1){
            wordStarted = 0;
           // printf("\n");
        }
    }
    printf("\n");
}
