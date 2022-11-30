#include <stdio.h>
#include <string.h>

void char_swap(char *a, char *b){
    char tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    char a[100], tmp;
    scanf("%[^\n]s", a);
    
    for(int i = 0, j = strlen(a)-1; i < j; i++, j--){
        char_swap(&a[i], &a[j]);
    }
    
    printf("%s\n", a);
    return 0;
}