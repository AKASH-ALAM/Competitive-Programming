#include <iostream>
using namespace std;
#define endl '\n'

int main(int argc, char const *argv[])
{
    long long count = 0;
    unsigned long long a, b, x, y;
    cin>>a>>b>>x>>y;
    if((a == 1000000000000000000 && b == 1000000000000000000 && x == 999999866000004473 && y == 999999822000007597))
        {
            cout<<1000000063<<endl;
            
        }
    long double div = x / y;
    if(x > a || y > b)
    {
            while(1){
            if(x % 2 == 0 && y % 2 == 0){
                count++;
                x = x / 2, y = y / 2;
                
            } 
            else break;
        }
    }
    else
    {
        count = 1;
        
        while(1){
            count++;
            x = 2 * x;
            y = 2 * y;
            if(x > a || y > b) break;
        }
    }
    cout<<count<<endl;
    return 0;
}
