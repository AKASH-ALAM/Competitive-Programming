#include<iostream>
using namespace std;
int main(){
    int t,b,h,area,i;
    cin>>t;
    for(i = 1; i <= t; i++){
        cin>>b>>h;
        area = (0.5 * b * h) * 2;
        cout<<"Case "<<i<<": "<<area<<endl;
    }
    return 0;
}