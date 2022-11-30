#include <iostream>
using namespace std;
int main(){
    int t, n;
    cin>>t;
    int result = 0;
    while(t--){
        cin>>n;
        int arry[n];
        for(int i = 0; i < n; i++) cin>>arry[i];

        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(arry[i] == arry[j]){
                    result = arry[j];
                    break;
                }
                    
            }
        }
        cout<<result<<endl;
    }
    return 0;
}