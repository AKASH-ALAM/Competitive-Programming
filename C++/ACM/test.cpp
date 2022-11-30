#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    int num, n;
    while(t--){
        cin>>n;
        if(n == 1) cout<<3<<endl;
        else if(n == 2) cout<<12<<endl;
        else{
            cout<<1; 
            for(int i = 0; i < n-2; i++){
                cout<<0;
            } 
            cout<<2<<endl;
        }
    }
    return 0;
}
