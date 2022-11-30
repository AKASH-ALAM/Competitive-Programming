#include <bits/stdc++.h>
using namespace std;
int main(){
    char name[15];
    float fix_slry,over_slry;
    cin>>name>>fix_slry>>over_slry;
    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<((over_slry*15)/100)+fix_slry<<endl;
    return 0;
}
