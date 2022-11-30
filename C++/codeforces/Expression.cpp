#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, c;
    cin>>a>>b>>c;
    int maximum = 0;
    int max;
    max = a + b * c;
    maximum = max;

    max = a * (b + c);
    if(max > maximum) maximum = max;
    max = a + b + c;
    if(max > maximum) maximum = max;
    
    max = a * b * c;
    if(max > maximum) maximum = max;

    max = (a + b) * c;
    if(max > maximum) maximum = max;
    cout<<maximum<<endl;
    return 0;
}
