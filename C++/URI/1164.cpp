#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,c = 0,m;
   int t;
   cin>>t;
   while(t--){
        cin>>n;
            m = n / 2;c=0;
        for(i = 1; i <= m; i++){
            if(n % i == 0){
                c = c + i;
            }
        }
        if(n == c){
            cout<<n<<" eh perfeito"<<endl;

        }
        else{
            cout<<n<<" nao eh perfeito"<<endl;
        }
   }
}
