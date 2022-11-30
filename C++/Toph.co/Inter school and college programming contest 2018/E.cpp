#include <iostream>
#include <iomanip>
#include <math.h>
#define endl '\n'
using namespace std;
int main(){
    int t, i = 1;
    cin>>t;
    while(i <= t){
        float x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        float x, y, d;
        x = x2 - x1, y = y2 - y1;
        cout<<"Case "<<i<<": ";
        cout<<fixed<<setprecision(4)<<sqrt(pow(x,2) + pow(y,2))<<endl;
        i++;
    }
    return 0;
}