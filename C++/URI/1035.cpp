#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,E,F;
    cin>>a>>b>>c>>d;
    E = c + d;
    F = a + b;
    if(b > c && d > a && E > F && c > 0 && d > 0 && a % 2 == 0){
            cout<<"Valores aceitos"<<endl;
    }
    else{
        cout<<"Valores nao aceitos"<<endl;
    }
    return 0;
}
