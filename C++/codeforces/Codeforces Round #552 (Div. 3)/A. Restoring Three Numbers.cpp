#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int array[4];
    for(int i = 0; i < 4; i++){
        scanf("%d", &array[i]);
    }
    sort(array, array+4);

    for(int i = 0; i < 3; i++){
        cout << array[3] - array[i] << " ";
    }
    puts("");
    return 0;
}