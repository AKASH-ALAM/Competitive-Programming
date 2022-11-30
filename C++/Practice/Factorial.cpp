#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=1;
    cout<<"Input any number for Factorial: ";
    cin>>n;
    if(f == 0){
        f;
    }
    else if(f>0){
        for(int i = 1;i<=n;i++){
            f = f*i;
        }
        cout<<"The Factorials of "<<n<<" is = "<<f<<endl;
    }
return 0;
}
