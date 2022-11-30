#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, t;
    int mod = 0;
    cin>>n>>t;
    while(t--){
        mod = n % 10;
        if(mod != 0){
            n = n - 1;
        }
        else 
            n = n / 10;
    }
    cout<<n<<endl;
    return 0;
}
