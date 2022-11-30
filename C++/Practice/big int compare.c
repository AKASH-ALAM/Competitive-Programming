#include<stdio.h>
#include<string.h>
int main(){
    int i,j;
    char n1[100],n2[100];
    while(scanf("%s%s",n1,n2) != EOF){
        int n1count = 0,n2count,n1p,n2p;
        if(n1[0] == '0'){
            for(i = 0; i < strlen(n1); i++){
                if(n1[i] == '0'){
                    n1count++;
                    n1p = i;
                }
                else
                    break;
            }
            int len = strlen(n1) - n1count;
            n1p = n1p + 1;
            for(i = 0,j = n1p; i < strlen(n1); i++,j++){
                n1[i] = n1[j];
            }
            n1[len] = '\0';
        }
        if(n2[0] == '0'){
            for(i = 0; i < strlen(n2); i++){
                if(n2[i] == '0'){
                    n2count++;
                    n2p = i;
                }
                else
                    break;
            }
            int len = strlen(n2) - n2count;
            n2p = n2p + 1;
            for(i = 0,j = n2p; i < strlen(n2); i++,j++){
                n2[i] = n2[j];
            }
            n2[len] = '\0';
        }
        if(strlen(n1) > strlen(n2)){
            printf("A > B\n");
        }
        else if(strlen(n1) < strlen(n2)){
            printf("A < B\n");
        }
        else if(strcmp(n1,n2) > 0){
            printf("A > B\n");
        }
        else if(strcmp(n1,n2) < 0){
            printf("A < B\n");
        }
        else if(strcmp(n1,n2) == 0){
            printf("A == B\n");
        }
    }
    return 0;
}