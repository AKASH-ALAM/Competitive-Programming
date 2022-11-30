#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if( a == b){
        cout<<"O JOGO DUROU 24 HORA(S)"<<endl;
        return 0;
    }
    if(a > 12){
        a = (a -12);
        a = 12 - a;
        if(b < 12){
            cout<<"O JOGO DUROU "<<a+b<<" HORA(S)"<<endl;
        }
        return 0;
    }
    if(a > 12 && b > 12){
            a = a -12;
            a = 12 - a;
            b = b - 12;
            b = 12 - b;
            int c = a + b;
            cout<<"O JOGO DUROU "<<c<<" HORA(S)"<<endl;
            return 0;
    }
    else{
        if(a > b){
            a = (12 - a) + b;
            cout<<"O JOGO DUROU "<<a<<" HORA(S)"<<endl;

        }
        else{
            a = b - a;
            cout<<"O JOGO DUROU "<<a<<" HORA(S)"<<endl;
        }

    }
}
