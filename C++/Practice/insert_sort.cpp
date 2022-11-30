#include <iostream>
using namespace std;

void insert_sort(int arry[], int n){
    int i, j, item;
    for(i = 1; i < n; i++){
        item = i;
        j = i - 1;
        while(j >= 0 && arry[j] > item){
            arry[j+1] = arry[j];
            j--;
        }
        arry[j+1] = item;
    }
}
int main(int argc, char const *argv[])
{
    int n; cin>>n;
    int arry[n]; for(int i = 0; i < n; i++) cin>>arry[i];
    insert_sort(arry,n);
    for(int i = 0; i < n; i++) cout<<arry[i]<<" ";
    cout<<endl;
    return 0;
}
