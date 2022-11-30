#include<iostream>
using namespace std;
int main(){
    int i,n,m;
    int t,c = 0;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n<m){
            for(n = n + 1 ; n < m; n++){
                if(n % 2 != 0){
                    c = c + n;
                }
            }
        }
        else{
            for(m = m+1; m < n; m++){
                if(m % 2 != 0){
                    c = c + m;
                }
            }
        }

        cout<<c<<endl;
        c = 0;
    }
}
