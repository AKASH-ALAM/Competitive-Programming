#include <bits/stdc++.h>
using namespace std;
int main(){
    int code,units,code2,units2;
    float price,price2;
    cin>>code>>units>>price>>code2>>units2>>price2;
    cout<<fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<(units*price)+(units2*price2)<<endl;
    return 0;
}
