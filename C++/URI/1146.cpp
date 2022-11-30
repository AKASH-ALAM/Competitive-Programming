#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    while(cin>>n){
        if(n==0){
            break;
        }
        else{
            for(i = 1; i < n; i++){
                cout<<i<<" ";
            }
            cout<<n<<endl;
        }
    }
}
