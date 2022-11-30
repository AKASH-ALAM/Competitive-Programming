#include <stdio.h> 

int main(){
    int x;
    scanf("%d",&x);
    if(x % 2 == 0){
        if((x >= 2 && x <= 5) || (x > 20)){
            printf("Not Weird\n");
        } else {
            printf("Weird\n");
        }
    } else {
        printf("Weird\n");
    }
    return 0;
}