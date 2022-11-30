#include <iostream>
using namespace std;

void selection_sort(int arry[], int n){
    int tmp, find_index, i, j;
    for(i = 0; i < n - 1; i++){
        find_index = i;

        for(j = i + 1; j < n; j++)  if(arry[j] < arry[find_index]) find_index = j;

        if(find_index != i) {
            tmp = arry[i];
            arry[i] = arry[find_index];
            arry[find_index] = tmp;
        }
        
    }
}

int main(){
    int n; cin>>n;
    int arry[n]; for(int i = 0; i < n; i++) cin>>arry[i];
    selection_sort(arry,n);
    for(int i = 0; i < n; i++) cout<<arry[i]<<" ";
    cout<<endl;
    return 0;
}