#include<bits/stdc++.h>
using namespace std;
int main(){
    int note,hun,fifty,twinty,ten,five,two,one,m,o,k,n,w;
    cin>>note;
    hun = note / 100;
    fifty = (note - (hun * 100)) / 50;
    m = note - (hun * 100);
    twinty = (m - (fifty * 50)) / 20;
    o = m - (fifty * 50);
    ten = (o - (twinty * 20)) / 10;
    k = o - (twinty * 20);
    five = (k - (ten * 10)) / 5;
    n = k - (ten * 10);
    two = (n - (five * 5)) / 2;
    w = n - (five * 5);
    one = (w - (two * 2)) / 1;
    cout<<note<<endl<<hun<<" nota(s) de R$ 100,00" <<endl<<fifty<<" nota(s) de R$ 50,00"<<endl<<twinty<<" nota(s) de R$ 20,00"<<endl<<ten<<" nota(s) de R$ 10,00"<<endl<<five<<" nota(s) de R$ 5,00"<<endl<<two<<" nota(s) de R$ 2,00"<<endl<<one<<" nota(s) de R$ 1,00"<<endl;
}
