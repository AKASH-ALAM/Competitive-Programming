#include <stdio.h>

int find_length(char a[]){
    int i;
    for(i = 0; a[i] != '\0'; i++);
    return i;
}

int main(){
    char a[100], b[100];
    scanf("%[^\n]s",a);
    scanf("\n%[^\n]s",b);
    int size = 0, i , j;
    size = find_length(a);
    a[size] = ' ';
    
    for(i = size+1, j = 0; b[j] != '\0'; j++, i++){
        a[i] = b[j];
    }
    
    a[i] = '\0';
    printf("%s\n", a);
    return 0;
}