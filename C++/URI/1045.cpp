#include<bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c,bg,md,sm,s,sum;
    cin>>a>>b>>c;
    if(a == b && b == c){
        bg = md = sm = a;
    }
    if(a > b && a > c){bg = a;}
    else if(b > a && b > c){bg = b;}
    else if(c > a && c > b){bg = c;}
    if(a < b && a < c){sm = a;}
    else if(b < a && b < c){sm = b;}
    else if(c < a && c < b){sm = c;}
    if(a > sm && a < bg){md = a;}
    else if(b > sm && b < bg){md = b;}
    else if(c > sm && c < bg){md = c;}
    if(bg > a || bg > b || bg > c){
        if(a == b){
            md = a;
            sm = b;
        }
        else if(a == c){
            md = a;
            sm = c;
        }
        else if(c == b){
            md = c;
            sm = b;
        }
    }
    else if(sm < a || sm < b || sm < c){
        if(a == b){
            md = a;
            bg = b;
        }
        else if(a == c){
            md = a;
            bg = c;
        }
        else if(b == c){
            md = b;
            bg = c;
        }
    }
    s = pow(md,2) + pow(sm,2);
    sum = md + sm;
    //cout<<bg<<endl<<md<<endl<<sm<<endl<<sum<<endl;
    if(bg >= sum){
        cout<<"NAO FORMA TRIANGULO"<<endl;
        return 0;
    }
    if(pow(bg,2) == s){
        cout<<"TRIANGULO RETANGULO"<<endl;
    }
    if(pow(bg,2) > s){
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }

    if(pow(bg,2) < s){
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
     if(a == b && b == c){
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    else if(a == b || a == c || b == c){
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }

}
