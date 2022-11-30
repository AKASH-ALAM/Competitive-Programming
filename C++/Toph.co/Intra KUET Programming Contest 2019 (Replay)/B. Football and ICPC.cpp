#include <iostream> 
#include <stdlib.h>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(){
    int t; scanf("%d", &t);
    int big = 0;
    int *array_one = (int*) malloc (sizeof(int) * t);
    int *array_two = (int*) malloc (sizeof(int) * t);
    for(int i = 0; i < t; i++){
        scanf("%d", &array_one[i]);
        array_one[i] *= 20;
    }
    for(int i = 0; i < t; i++){
        scanf("%d", &array_two[i]);
        array_two[i] *= 10;
        array_one[i] -= array_two[i];
        if(big < array_one[i]){
            big = array_one[i];
        }
    }

    printf("%d\n", big);

    return 0;
}

