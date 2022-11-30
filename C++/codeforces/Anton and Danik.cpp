#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i, A = 0;
    cin>>n;
    char s[n];
    for(i  = 0; i < n; i++){
        cin>>s[i];
        if(s[i] == 'A') A++;
    }
    n = n - A;
    if(A > n) cout<<"Anton"<<endl;
    else if(A < n) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    return 0;
}
