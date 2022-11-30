#include<bits/stdc++.h>
using namespace std;
int linearSearch(int arry[],int s,int n){
    int i;
    for(i = 0; i < s; i++){
        if(arry[i] == n){
            return i + 1;
        }
    }
    return -1;
}
int main(){
    int get,s,n,i;
    cin>>s;
    int arry[s];
    for(i = 0; i < s; i++){
        cin>>arry[i];
    }
    cin>>n;
    get = linearSearch(arry,s,n);
    if(get == -1){
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"We found it "<<get<<" number position"<<endl;
    }
    return 0;
}
