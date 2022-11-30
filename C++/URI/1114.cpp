#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        if(n == 2002){
            cout<<"Acesso Permitido"<<endl;
            return 0;
        }
        else{
            cout<<"Senha Invalida"<<endl;
        }
    }
}
