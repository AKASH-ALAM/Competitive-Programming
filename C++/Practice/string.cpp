#include <bits/stdc++.h>

using namespace std;
int main()
{
    freopen("in.txt","rt",stdin);
    freopen("out.txt","wt",stdout);
    int n,arr[3],count=0, check = 0,i,tc;

    while(scanf("%d", &n) != EOF)
    {
        //cin>>n;
        while(n--)
        {
            for (i = 0; i < 3; i++)
            {
                cin>>arr[i];
            }

            for (i = 0; i < 3; i++)
            {
               if (arr[i] == 1)
               {
                   count++;
               }
            }
            if (count >= 2)
            {
                check++;
            }
            count = 0;
        }
        cout<<check<<endl;
        check = 0;
    }
}
