#include<bits/stdc++.h>
using namespace std;
int binarySearch(int a[],int s,int n){
    int left = 0, right = s - 1, mid;
    while(left <= right){
        mid = (left + right) / 2;
        if(a[mid] == n){
            return mid + 1;
        }
        if(n > a[mid]){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return -1;
}
int main(){
    int s,n,i;
    cin>>s;
    int arry[s];
    for(i = 0; i < s; i++){
        cin>>arry[i];
    }
    cin>>n;

    int get = binarySearch(arry,s,n);
    if(get == -1){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"We found it "<<get<<" number position"<<endl;
    }
    return 0;

}
