#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,bn,pkn,score,n,bs1,bs2,ps1,ps2;
    int bn2,pkn2;
    cin>>n;
    while(n--){
        cin>>bs1>>bs2>>ps1>>ps2;
        bn = bs1 + bs2;
        pkn = ps1 + ps2;
        cin>>bs1>>bs2>>ps1>>ps2;
        bn2 = bs1 + bs2;
        pkn2 = ps1 + ps2;
        if(bn > pkn && bn2 > pkn2){
            cout<<"Banglawash"<<endl;
        }
        else if(bn <= pkn || bn2 <= pkn2){
            cout<<"Miss"<<endl;
        }
    bn = 0,pkn = 0;
    bn2 = 0,pkn2 = 0;
    }
}
