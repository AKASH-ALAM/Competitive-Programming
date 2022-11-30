#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, k, i, j, sm;
    cin>>n>>k;
    long long arry[n];
    for(i = 0; i < n; i++) cin>>arry[i];
    sort(arry, arry+n);
    while(k--){
        for(i = 0; i < n; i++){
            if(arry[i] != 0){
                //find non-zero value
                sm = arry[i];
                break;
            }
        }
        cout<<sm<<endl;
        for(j = 0; j < n; j++){
            //here i'm subtract all element by minimum non-zero value
            if(arry[j] != 0)
                arry[j] = arry[j] - sm;
        }
        if(arry[n-1] == 0) sm = 0;
        else sort(arry, arry+n);
    }
    return 0;
}