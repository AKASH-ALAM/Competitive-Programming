#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i;
    cin>>n;
    for(m = 1; m <= n; m++)
    {
       
        int j = m*m;
        int k = m * m * m;
        cout<<m<<" "<<j<<' '<<k<<endl;
        cout<<m<<' '<<j+1<<' '<<k+1<<endl;
        
    }
    return 0;
}
