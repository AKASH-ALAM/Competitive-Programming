#include <stdio.h>

int main(){
    int i, sum = 0, curr = 1, n = 5; 

    for(i = 1; i <= n; i++){
        sum += curr;
        curr <<= 1;
    }
    printf("%d\n", curr);
    printf("%d\n", sum);
    return 0;
}