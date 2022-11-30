#include <stdio.h> 

int main(){
    int n, temp = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        temp += i;
    }
    printf("%d\n", temp);
    return 0;
}