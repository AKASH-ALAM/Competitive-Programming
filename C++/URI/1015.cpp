#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2,p1,p2;
    cin>>x1>>y1>>x2>>y2;
    p1 = pow((x2-x1),2);
    p2 = pow((y2-y1),2);
    cout<<fixed<<setprecision(4)<<pow((p1+p2),0.5)<<endl;
}
