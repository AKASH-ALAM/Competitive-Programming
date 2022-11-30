#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c = 0, r = 0, s = 0;
    cin>>n;
    int i,j,arry[n];
    char chr[n];
    for(i = 0; i < n; i++){
        cin>>arry[i]>>chr[i];
    }
    for(i = 0; i < n; i++){
       if('C' == chr[i]){
            c = c + arry[i];
       }
       else if('R' == chr[i]){
            r = r + arry[i];
       }
       else if('S' == chr[i]){
            s = s + arry[i];
       }
    }
    float cc,rr,ss;
    int sum = c + r + s;
    cc = c * (100.0 / sum);
    rr = r * (100.0 / sum);
    ss = s * (100.0 / sum);
    cout<<"Total: "<<sum<<" cobaias"<<endl<<"Total de coelhos: "<<c<<endl<<"Total de ratos: "<<r<<endl<<"Total de sapos: "<<s<<endl;
    cout<<fixed<<setprecision(2)<<"Percentual de coelhos: "<<cc<<" %"<<endl<<"Percentual de ratos: "<<rr<<" %"<<endl<<"Percentual de sapos: "<<ss<<" %"<<endl;
}
