#include<stdio.h>
int main(){
    FILE *ap;
    char filename[] = "akash.txt";
    ap = fopen(filename,"w");
    fprintf(ap,"Hey this akash,from Rangpur.");

    fclose(ap);

    return 0;
}
