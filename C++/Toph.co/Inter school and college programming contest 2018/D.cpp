#include <iostream>
#define endl '\n'
using namespace std;
int main(){
    int arry[3], big = 0;
    for(int i = 0; i < 3; i++){
        cin>>arry[i];
        if(arry[i] > big) big = arry[i];
    }
    cout<<big<<endl;
    return 0;
}