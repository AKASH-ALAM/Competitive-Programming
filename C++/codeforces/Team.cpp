#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,count = 0,n,sum;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        sum = a + b + c;
        if(sum >= 2){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
