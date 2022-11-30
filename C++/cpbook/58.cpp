/*#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    while(t--){
        char s[100000],ch,c;
        int count = 0;
        scanf(" %[^\n] %c",s,&ch);
        c = ch;
        for(i = 0; i < strlen(s); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = 'a' + (s[i] - 'A');
            }
        }
        if(ch >= 'A' && ch <= 'Z'){
                ch = 'a' + (ch - 'A');
            }
        for(i = 0; i < strlen(s); i++){
            if(s[i] == ch){
                count++;
            }
        }
        if (count == 0)
            printf("'%c' is not present\n",ch);
        else
            printf("Occurrence of '%c' in '%s' = %d\n", ch,s, count);
    }
    return 0;
}*/
#include <stdio.h>
int main(){
    int T, i;
    scanf("%d", &T);
    while (T--){
        char str[10001];
        char ch;
        scanf(" %[^\n] %c", str,&ch);
        int count = 0;
        for (i = 0; str[i] != '\0'; i++){
            if (ch == str[i] || ch - 32 == str[i] || ch + 32 == str[i])
                count++;
        }
        if (count == 0)
            printf("'%c' is not present\n",ch);
        else
            printf("Occurrence of '%c' in '%s' = %d\n",ch, str, count);
    }
 
    return 0;
}