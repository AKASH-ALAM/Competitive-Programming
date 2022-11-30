#include<bits/stdc++.h>
using namespace std;
int main(){
    int year,month,day,input;
    cin>>input;
    year = input / 365;
    month = (input - (year * 365)) / 30;
    day = (input - (year * 365)) - (month * 30);
    cout<<year<<" ano(s)"<<endl<<month<<" mes(es)"<<endl<<day<<" dia(s)"<<endl;
    return 0;
}
