#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    char month[12][15] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
    cin>>n;
    if(n < 1 || n > 12){
        return 0;
    }
    else
    cout<<month[n-1]<<endl;
}
