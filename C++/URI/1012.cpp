#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,pi=3.14159;
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(3);
    cout<<"TRIANGULO: "<<0.5*a*c<<endl;
    cout<<"CIRCULO: "<<pi*pow(c,2) <<endl;
    cout<<"TRAPEZIO: "<< 0.5*(a+b)*c<<endl;
    cout<<"QUADRADO: "<<b*b<<endl;
    cout<<"RETANGULO: "<<a*b<<endl;
}
