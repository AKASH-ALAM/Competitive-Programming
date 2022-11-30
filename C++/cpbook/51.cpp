#include<iostream>
using namespace std;
int main(){
    int i,t;
    cin>>t;
    while(t--){
        float n;
        cin>>n;
        int count = 0;
        while(1){
            n = n / 2;
            count++;
            if(n <= 1)
                break;
        }
        cout<<count<<" days"<<endl;
    }
    return 0;
}