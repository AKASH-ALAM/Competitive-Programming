#include <iostream>
#define endl '\n'
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t1, v1, t2, v2;
    cin>>t1>>v1>>t2>>v2;
    cout<<(t1 * v1) + (t2 * v2)<<endl;
    return 0;
}
