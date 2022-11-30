#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,a = 0,g = 0,d = 0;
    while(cin>>n){
        if(n == 4){
            break;
        }
        else if(n == 1){
            a = a + 1;
        }
        else if(n == 2){
            g = g + 1;
        }
        else if(n == 3){
            d = d + 1;
        }
        else{
            continue;
        }
    }
    cout<<"MUITO OBRIGADO"<<endl<<"Alcool: "<<a<<endl<<"Gasolina: "<<g<<endl<<"Diesel: "<<d<<endl;
}
