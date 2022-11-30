#include<bits/stdc++.h>
using namespace std;
int main(){
    float n,p,s,sum;
    cin>>n;
    if(n <= 400.00){
        s = (15 * n) / 100;
        sum = n + s;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<sum<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<s<<endl;
        cout<<"Em percentual: 15 %"<<endl;
    }
    else if(n > 400.00 && n <= 800.00){
        s = (12 * n) / 100;
        sum = n + s;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<sum<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<s<<endl;
        cout<<"Em percentual: 12 %"<<endl;
    }
    else if(n > 800.00 && n <= 1200.00){
        s = (10 * n) / 100;
        sum = n + s;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<sum<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<s<<endl;
        cout<<"Em percentual: 10 %"<<endl;
    }
    else if(n > 1200.00 && n <= 2000.00){
        s = (7 * n) / 100;
        sum = n + s;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<sum<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<s<<endl;
        cout<<"Em percentual: 7 %"<<endl;
    }
    else if(n > 2000.00){
        s = (4 * n) / 100;
        sum = n + s;
        cout<<fixed<<setprecision(2)<<"Novo salario: "<<sum<<endl;
        cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<s<<endl;
        cout<<"Em percentual: 4 %"<<endl;
    }
}
