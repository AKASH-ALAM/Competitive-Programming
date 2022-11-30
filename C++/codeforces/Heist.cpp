#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    long long arry[n];
    int i, j, count = 0;
    for(i = 0; i < n; i++) cin>>arry[i];
    sort(arry, arry+n);

    for(i = 0; i < n-1; i++){
        if((arry[i+1] - arry[i]) > 1){
            count  += (arry[i+1] - arry[i]) - 1; 
        }
    } 
    cout<<count<<endl;
    return 0;
}