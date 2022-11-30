#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,sm,em,x,y;
    cin>>a>>sm>>b>>em;
    if(sm < em){
        x = em - sm;
    }
    if( a == b && sm == em){
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
        return 0;
    }
    if(a < 12 && b < 12){
        if(a < b){
            y = b - a;
        }
        else{
            a = 12 - a;
            y = a + b;
        }
    }
    if(a > 12 && b < 12){
        a = (a -12);
        a = 12 - a;
        y = a + b;
    }
    else if(a < 12 && b > 12){
        a = 12 - a;
        b = b - 12;
        y = a + b;

    }
    else if(a > 12 && b > 12){
            a = a -12;
            a = 12 - a;
            b = b - 12;
            b = 12 - b;
            y = a + b;
    }
    if(sm > em){
        sm = 60 - sm;
        x = sm + em;
        y--;
    }
    cout<<"O JOGO DUROU "<<y<<" HORA(S) E "<<x<<" MINUTO(S)"<<endl;

}

