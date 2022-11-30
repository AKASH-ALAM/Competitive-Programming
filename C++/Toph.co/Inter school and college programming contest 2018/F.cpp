#include <iostream>
#include <iomanip>
#define endl '\n'
const double pi = 3.14159265358979323846;
using namespace std;
int main(){
    int t, i = 1;
    cin>>t;
    while(i <= t){
        float c, r;
        cin>>c;
        r = c /  (2 * pi);
        cout<<fixed<<setprecision(3)<<"Case "<<i<<": "<<r * 2<<endl;
        i++;
    }
    return 0;
}
