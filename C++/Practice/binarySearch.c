#include<stdio.h>
int binarySearch(int a[],int size,int n){
    int left,right,mid;
    left = 0;
    right  = size - 1;
    while(left <= right){
        mid = (left + right) / 2;
        if(a[mid] == n){
            return mid;
        }
        if(n > a[mid]){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
}
int main(){
    int size,find,i;
    printf("Input an array size: ");
    scanf("%d",&size);
    int arry[size];
    printf("Input sorted array: ");
    for(i = 0; i < size; i++){
        scanf("%d",&arry[i]);
    }
    printf("please input which value you are searching: ");
    scanf("%d",&find);

    int get = binarySearch(size,arry,find);
    printf("you are looking a number in positon: %d\n",get+1);
    return 0;
}
