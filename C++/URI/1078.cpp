#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,mal;
    cin>>n;
    if(1 < n < 1000){
        for(i = 1; i <= 10; i++){
            mal = i * n;
            cout<<i<<" x "<<n<<" = "<<mal<<endl;
        }
    }
}
