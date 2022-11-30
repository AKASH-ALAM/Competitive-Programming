#include<bits/stdc++.h>
using namespace std;
int main(){
    int second,minute,hour,n,m;
    cin>>n;
    hour =(n / 3600);
    m = (n - (hour * 3600)) ;
    minute = m / 60;
    second = m - (minute * 60);
    cout<<hour<<":"<<minute<<":"<<second<<endl;
}
