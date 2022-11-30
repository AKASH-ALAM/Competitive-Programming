#include <iostream>
using namespace std;

void bubble_sort(int arry[], int n){
    int temp, i, j;
    for(i = 0; i < n; i++){
        for(j = 0; j < n-i-1; j++) 
            if(arry[j] > arry[j+1]){
                temp = arry[j];
                arry[j] = arry[j+1];
                arry[j+1] = temp;
            }
    }
}

int main(int argc, char const *argv[])
{
    int n; cin>>n;
    int arry[n]; for(int i = 0; i < n; i++) cin>>arry[i];
    bubble_sort(arry,n);
    for(int i = 0; i < n; i++) cout<<arry[i]<<" ";
    cout<<endl;
    return 0;
}
