#include<iostream>
using namespace std;
int main(){
    int t,y = 31104000,mnt = 2592000,d = 86400, h = 3600, m = 60,i;
    cin>>t;
    for(i = 1; i <= t; i++){
        int year = 0,month = 0,day = 0,hour = 0,minute = 0,second = 0,s = 0;
        cin>>s;
        cout<<"Case "<<i<<": ";
        year = s / y, s = s % y;
        month = s / mnt, s = s % mnt;
        day = s / d, s = s % d;
        hour = s / h, s = s % h;
        minute = s / m;
        second = s % m;
        if(year != 0){
            if(year == 1){
                cout<<year<<" year ";
            }
            else{
                cout<<year<<" years ";
            }
        }
        if(month != 0){
            if(month == 1){
                cout<<month<<" month ";
            }
            else{
                cout<<month<<" months ";
            }
        }
        if(day != 0){
            if(day == 1){
                cout<<day<<" day ";
            }
            else{
                cout<<day<<" days ";
            }
        }
        if(hour != 0){
            if(hour == 1){
                cout<<hour<<" hour ";
            }
            else{
                cout<<hour<<" hours ";
            }
        }
        if(minute != 0){
            if(minute == 1){
                cout<<minute<<" minute ";
            }
            else{
                cout<<minute<<" minutes ";
            }
        }
        if(second != 0){
            if(second == 1){
                cout<<second<<" second";
            }
            else{
                cout<<second<<" seconds";
            }
        }
        cout<<endl;
    }
    return 0;
}