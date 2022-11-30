#include <stdio.h>

int main(){
    int h, l;
    scanf("%d%d", &h, &l);
    int total = (h+l) - 1;
    printf("%d %d\n", total-h, total-l);
    return 0;
}