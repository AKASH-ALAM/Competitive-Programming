#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        float a,b,c;
        cin>>a>>b>>c;
            float s,area,mul;
            s = (a+b+c) / 2;
            mul = s * (s - a) * (s - b) * (s - c);
            area = sqrt(mul);
            cout<<fixed<<setprecision(3)<<"Area = "<<area<<endl;
    }
    return 0;
}