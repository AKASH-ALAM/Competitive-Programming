#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter Any number for Fibonacci: ";
    int a=0,b=1,n,f,i;
    cin>>n;
    cout<<"The result is: "<<a<<" "<<b;
   for(i = 1;i<=n;i++){
        f = a + b;
        a = b;
        b = f;
        cout<<" "<<f<<" ";
   }
   cout<<endl;
return 0;
}
