#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int XOR = 0, AND = 0, OR = 0;
  int a, b, first, second;
  a = 1, b = 2;
  for(int i = b; i <= n+1; i++){
      if(i == n+1){
          b++, i = b, a++;
          if(i > n) break;
      }
        //printf("a : %d b : %d\n", a, i);
        if((a & i) > AND && (a & i) < k) AND =  a & i;
        if((a | i) > OR && (a | i) < k) OR = a | i;
        if ((a ^ i) > XOR && (a ^ i) < k) XOR = a ^ i;
    }
  printf("%d\n%d\n%d\n", AND, OR, XOR);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    
    return 0;
}
