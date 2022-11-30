#include <iostream>
using namespace std;
int main(){
    int n, a, b;
    int capacity = 0;
    int temp;
    cin>>n;
    int flag = n;
    for(int i = 0; i < n; i++){
        cin>>a>>b;
        if(i == 0) temp = b;
        else temp = (temp - a) + b;
        
        if(temp > capacity) capacity = temp;
    }
    cout<<capacity<<endl;
}