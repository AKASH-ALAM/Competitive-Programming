#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int h,m,s,hh,mm,ss,taly;
        int f_h,actual_s,actual_ss;
        cin>>h>>m>>s;
        cin>>hh>>mm>>ss;
        cin>>taly;
        m = m * 60;
        mm = mm * 60;
        if(hh > 12)
        if(h > 12){
            h = h - 12;
            h = 12 - h;
            f_h = h * 3600;
            actual_s = f_h - (m + s);
        } 
       

    }
}