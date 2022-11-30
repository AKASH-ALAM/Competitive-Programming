#include <iostream>
#include <math.h>
#define endl '\n'
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int x1,y1, x2, y2, r;
        cin>>x1>>y1>>r>>x2>>y2;
        int x = pow((x2 - x1),2), y = pow((y2 - y1),2);
        if(sqrt(x + y) <= r) cout<<"The point is inside the circle"<<endl;
        else cout<<"The point is not inside the circle"<<endl;
    }
    return 0;
}