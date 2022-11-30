#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void solve(double meal_cost, int tip_percent, int tax_percent) {
    double tip = meal_cost * tip_percent / 100;
    double tax = meal_cost * tax_percent / 100;
    double mot = meal_cost + tip + tax;
    int c, f;
    f = floor(mot);
    double cut = mot - f;
    if(cut >= 0.5){
        c = ceil(mot);
        printf("%d\n", c);
    } else{
        printf("%d\n", f);
    }
}

int main()
{
    int tip, tax;
    double meal_cost;
    scanf("%lf%d%d",&meal_cost, &tip, &tax);
    solve(meal_cost, tip, tax);
    return 0;
}
