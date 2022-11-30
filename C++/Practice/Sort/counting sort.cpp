#include <bits/stdc++.h>
#include<stdio.h>
#define arr_size 100
#define range 10
using namespace std;
int arr[arr_size]; //Globally declared. So initially all indices are zero

int main(){
    int i, n, value;

    printf("Enter the number of Values: ");
    scanf("%d", &n);

    printf("Enter %d elements (1 to 10):", n);
    for(int i = 1; i<=n; i++){
        scanf("%d", &value);
        arr[value] = arr[value] + 1;
    }

    printf("Frequencies of values (1 to 10):\n");
    for(int i = 1; i<=range; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    int space = n - 1;
    cout << "Sorted array is : ";
    for(int i = 0; i < range; i++) {
        while(arr[i]){
            cout << i;
            if(space) cout << " "; space--;
            arr[i]--;
        }
    } cout << endl;
    return 0;
}