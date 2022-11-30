#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0,b=1,n,f,i;
    cin>>n;
    cout<<a<<" "<<b;
   for(i = 1;i<=n;i++){
        f = a + b;
        a = b;
        b = f;
        cout<<" "<<f<<" ";
   }


}
