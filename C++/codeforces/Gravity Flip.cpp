#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arry[n];
    for(int i = 0; i < n; i++) cin>>arry[i];
    sort(arry, arry+n);
    for(int i = 0; i < n; i++) cout<<arry[i]<<" ";
    cout<<endl;
    return 0;
}