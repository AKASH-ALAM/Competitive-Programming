#include<iostream>
using namespace std;
int main(){
    freopen("output.txt", "w", stdout);
    int n, sum = 0;  scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        sum += i;
        printf("%d", i);
        if(i != n) printf(" + ");
    }
    printf("\nSum = %d\n", sum);
    return 0;
}