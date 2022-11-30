#include<bits/stdc++.h>
using namespace std;
int find_max(int arry[],int n){
    int max;int i;
    max = arry[0];
    for(i=1;i<n;i++){
        if(arry[i] > max){
            max = arry[i];
        }
    }
    return max;
}

int main(){
    int n,z;
    cout<<"Input array size: ";
    cin>>n;
    int a[n];
    cout<<"Input Array value According to array size."<<endl;
    for(int i = 0;i<n; i++){
       cin>>a[i];
    }
    z=find_max(a,n);
    cout<<"Max number is: "<<z<<endl;
}
