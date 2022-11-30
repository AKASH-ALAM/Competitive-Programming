#include<stdio.h>
int main(){
    int i,j;
    char s1[6] = "Bangla";
    char s2[] = "desh";
    char s3[20];
    for(i=0,j=0;i<6;i++,j++){
        s3[j] = s1[i];
    }
    for(i=0;i<4;i++,j++){
        s3[j] = s2[i];
    }
    s3[j] = '\0';
    printf("%s",s3);
}
