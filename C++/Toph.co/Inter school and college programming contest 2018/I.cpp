#include <iostream>
#define endl '\n'
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int arry[3];
        int n, bike, car, bus; cin>>n>>bike>>car>>bus;
        int b = n / 2, c = n / 4, bu = n / 50, sm;
        if((b*2) != n){
            b++;
        }
        arry[0] = b * bike;
        sm = arry[0];
        if((c*4) != n){
            c++;
        }
        arry[1] = c * car;
        if(sm > arry[1]) sm = arry[1];
        if((bu*50) != n){
            bu++;
        }
        arry[2] = bu * bus;
        if(sm > arry[2]) sm = arry[2];
        cout<<sm<<endl;
    }
    return 0;
}
