#include <iostream>
#include <string.h>
#define endl '\n'
#define size 201

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char s[size];
        int len = 1 , arry[11] = {1,1,1,1,1,1,1,1,1,1,1};
        char str[11][21];
        int i, j = 0, k = 0;
        scanf(" %[^\n]",s);
        for(i = 0; s[i] != '\0'; i++){
            if(s[i] == ' '){
                len++;
                str[j][k] = '\0';
                j++;
                k = 0;
            }
            else{
                str[j][k] = s[i];
                k++;
            }
        }str[j][k] = '\0';

        char flag[] = "+";
        int r = 1;
        for(i = 0; i < len; i++){
            for(j = 1 + i; j < len; j++){
                if( strcmp(str[i],str[j]) == 0 && strcmp(flag,str[j]) != 0){
                    
                    strcpy(str[j],"+");
                    arry[i]++;
                }
            }
            if(arry[i] != 1){
                for(j = 1; j <= arry[i]; j++) r = r * j;
            } 
        }

        int c = 1;
        for(i = 1; i <= len; i++){
            c = c * i;
        }
        cout<<1<<"/"<<c/r<<endl;
    }
    return 0;
}