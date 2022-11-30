#include<bits/stdc++.h>
using namespace std;
int main(){
    int w,d;
    cin>>w;
    d = w - 2;
    (d == 0 || d < 0) ? cout<<"NO"<<endl : (d % 2 == 0) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    return 0;
}
