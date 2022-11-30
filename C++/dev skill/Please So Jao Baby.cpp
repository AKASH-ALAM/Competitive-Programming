#include <iostream>
#include <algorithm>
using namespace std;
#define size 20000
int main(int argc, char const *argv[])
{
    int t, count = 0, i;
    int arry[size], tm = 0;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        for(i = 0; i < size; i++){
            cin>>arry[i];
            if(count >= k) break;
            count = count + arry[i];
            tm++;
        }
        cout<<tm<<endl;
    }
    return 0;
}
