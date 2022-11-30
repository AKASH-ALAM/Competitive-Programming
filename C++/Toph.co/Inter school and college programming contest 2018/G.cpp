#include <iostream>
#define endl '\n'
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int x, d; cin>>x>>d;
        if(x < 6) cout<<"Yes! The ant is Alive."<<endl;
        else cout<<"Sorry !the ant is nomore."<<endl;
    }
    return 0;
}
