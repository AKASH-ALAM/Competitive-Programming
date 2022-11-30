#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,k;
    cin>>a>>b>>k;
    for(int i = 1 ;i<=k ;i++)
    {
        if(a<=b)a++;
        else
            b++;
    }
    //cout << a << endl << b << endl;
    cout<<a*b<<endl;
}