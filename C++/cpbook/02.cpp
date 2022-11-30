#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int n;
        cin>>n;
        int arr[n],i,neg=0,pos=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            if(arr[i] > 0)
            {
                pos++;
            }
            else if(arr[i] < 0)
            {
                neg++;
            }

        }
         cout<<pos<<" "<<neg<<endl;

    }
