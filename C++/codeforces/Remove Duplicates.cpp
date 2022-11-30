#include <iostream>
#define endl '\n'

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,i, j;
    cin>>n;
    int arry[n], rem = 0;
    for(i = 0; i < n; i++) cin>>arry[i];

    for(j = 0; j < n; j++){
        for(i = j + 1; i < n; i++){
            if(arry[i] == arry[j]){
                arry[j] = 0;
                rem++;
            }
        }
    }
    
    cout<<n-rem<<endl;
    for(i = 0; i < n; i++){
        if(arry[i] != 0) cout<<arry[i]<<" ";
    }
    cout<<endl;
    return 0;
}