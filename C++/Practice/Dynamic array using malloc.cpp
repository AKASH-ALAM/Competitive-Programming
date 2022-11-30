#include <iostream> 
using namespace std;
int main(){
    int x;
    printf("Enter the array size : ");
    scanf("%d", &x);
    int *arry = (int *) malloc(sizeof(int) * x);
    //Dynamically memory allocation
    for(int i = 0; i < x; i++) {
        scanf("%d", arry+i);
    }
    //input a value from zero to end of pointer address
    for(int i = 0; i < x; i++){
        printf("%d\n", *(arry+i));
    }
    //dereffarencing value from zero to end of the array
    return 0;
}