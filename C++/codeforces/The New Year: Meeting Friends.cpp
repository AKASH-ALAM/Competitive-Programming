#include <iostream>
#include <algorithm>
using namespace std;
#define endl '\n'
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int bg = 0;
    int a[3];
    for(int i = 0; i < 3; i++) cin>>a[i];
    sort(a, a+3);
    cout<<(a[2] - a[1]) + (a[1] - a[0])<<endl;
    return 0;
}