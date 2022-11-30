#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,s;
    cin>>a>>b>>s;
    if(a>b && a>s){
        cout<<a<<" eh o maior"<<endl;
    }
    else if(b>a && b>s){
        cout<<b<<" eh o maior"<<endl;
    }
    else{
        cout<<s<<" eh o maior"<<endl;
    }
}
