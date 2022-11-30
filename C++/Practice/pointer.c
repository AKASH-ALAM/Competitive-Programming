#include<stdio.h>
int main(){
    char c = 'A';
    char *p, **q;
    p = &c;
    q = &p;
    **q = 'B';
    printf("value of c: %c\n",c);
    printf("value of p: %c\n",*p);
    printf("value of q: %c\n",**q);
    return 0;
}
