#include<stdio.h>
int main(){
    char c;
    printf("Please enter a small letter: ");
    c = getchar();
    printf("The capital letter is: %c\n",c - 32);
    return 0;
}
