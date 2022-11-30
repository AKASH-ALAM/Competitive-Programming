/**
 *    Author:  AKASH-ALAM       
**/
#include <stdio.h>

void pattern_printing(int n){
    int tmp_n = n;
    int a = n, b = (n * 2) - 3;
    int prnt = n;
    while(tmp_n--){
        for(int i = n; i >= a; i--) printf("%d ", i);
        for(int i = 0; i < b; i++) {
            printf("%d ", prnt);
        }
        for(int i = a; i <= n; i++) printf("%d ", i);
        b = b - 2;  if(b < 0) b = 1;
        a = a - 1;  if(a == 1) a = 2;
        prnt = prnt - 1;
        printf("\n");
    }

    int tmp2 = n - 1;
    int c = 2, prnt2 = 2, d = 1;
    while(tmp2--){
        if(prnt2 > n) break;
        for(int i = n; i >= c; i--) printf("%d ", i);
        for(int i = 0; i < d; i++)  printf("%d ", prnt2);
        for(int i = c; i <= n; i++) printf("%d ", i);
        c++, prnt2++, d = d + 2;
        printf("\n");
    }
}
int main(){
    int n;  scanf("%d", &n);
    if(n == 1){
        printf("1\n");
        return 0;
    } 
    else    pattern_printing(n);
    
    return 0;
}
