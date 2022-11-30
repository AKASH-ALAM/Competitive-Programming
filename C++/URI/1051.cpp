#include<bits/stdc++.h>
using namespace std;
int main(){
    float n,p,s,sum;
    cin>>n;
    if(n >=400.00){
        s = 15 * n;
        p = n - s;
        sum = n + p;
        cout<<"Novo salario: "<<sum<<endl;
        cout<<"Reajuste ganho: "<<p<<endl;
        cout<<"Em percentual: 15%"<<endl;
    }
}