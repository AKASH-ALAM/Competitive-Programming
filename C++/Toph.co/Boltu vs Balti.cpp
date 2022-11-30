#include <iostream>
#define endl '\n'
using namespace std;
int main(){
    long long x, y;
    while(cin>>x>>y){
        unsigned long long sm, bg, tmp;
       if(x > y){
           tmp = y;
           y = x;
           x = tmp;
       }
        sm = (x - 1) * ((x - 1) + 1) / 2;
        bg = y * (y + 1) / 2;
        cout<<"Sum of "<<x<<" to "<<y<<" is -> "<<bg - sm<<";"<<endl; 
    }
    return 0;
}