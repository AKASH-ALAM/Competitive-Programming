#include <iostream>
using namespace std;
int main(){
    int i = 1, k, n, w;
    cin>>k>>n>>w;
    int total = 0;
    for(i = 1; i <= w; i++){
        total = (i * k) + total;
    }
    n = total - n;
    if(n < 0) cout<<"0"<<endl;
    else cout<<n<<endl;
    return 0;
}