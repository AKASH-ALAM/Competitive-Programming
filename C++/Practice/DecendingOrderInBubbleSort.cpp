#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,arry[101];
    cout<<"Enter Array size: ";
    cin>>n;
    for(i = 0; i < n; i++){
        cin>>arry[i];
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n-1-i; j++){
            if(arry[j] < arry[j+1]){
                int c = arry[j];
                arry[j] = arry[j+1];
                arry[j+1] = c;
            }
        }
    }
    cout<<"Sorted array is: ";
    for(i= 0; i < n ; i++){
        cout<<arry[i]<<" ";
    }
}

