#include <stdio.h>
int main(){
    int ara[5] = {50,60,70,80,90},i;
    for(i = 0; i < 5; i++){
        printf("%d ",ara[i]);
    }
    printf("\nAddress of ara is %p\n",ara);
    for(i = 0; i < 5; i++){
        printf("Address of ara[%d] is %p\n",i,&ara[i]);
    }
    return 0;
}
