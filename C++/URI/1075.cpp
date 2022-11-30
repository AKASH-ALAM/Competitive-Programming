#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum,i;
    cin>>n;
    cout<<"2"<<endl;
    for(i = 1; i < 10000; i++){
        sum = (n * i) + 2;
        if(sum < 10000){
            cout<<sum<<endl;
        }
    }
    return 0;
}
