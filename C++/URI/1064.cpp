#include<bits/stdc++.h>
using namespace std;
int main(){
    float n,a,sum = 0;
    int i,c = 0;
    for(i = 0; i < 6; i++){
        cin>>n;
        if(n > 0){
            c++;
            sum = sum + n;
        }
    }
    a = sum / c;
    cout<<c<<" valores positivos"<<endl<<fixed<<setprecision(1)<<a<<endl;
}

