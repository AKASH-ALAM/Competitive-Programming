#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    int c = 0, d = 1 , s;
    cin>>n;
    if(n <= 1){
        cout<<n<<endl;
    }
    else{
        cout<<c<<' ';
        for(i = 1; i < n; i++){
        s = c + d;
        d = c;
        c = s;
        if(i < n - 1){
            cout<<s<<' ';
        }
        }
        cout<<s<<endl;
    }
}