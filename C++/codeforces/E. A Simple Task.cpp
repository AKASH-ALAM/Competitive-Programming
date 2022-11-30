#include <iostream> 
#include <algorithm> 
#include <stdlib.h>
#include <stdio.h>

int rev(int a, int b){
    return a > b;
}

using namespace std;

int main(){
    int n, q; scanf("%d%d", &n, &q);
    char *s = (char*) malloc(sizeof(char) * n);
    scanf("%s", s);
    while(q--){
        int i, j, k; scanf("%d%d%d", &i, &j, &k);
        if(k){
            sort(s+i-1, s+j);
            //cout << s << endl;
        } else {
            sort(s+i-1, s+j, rev);
            //cout << s << endl;
        }
    } printf("%s\n", s);

    return 0;
}