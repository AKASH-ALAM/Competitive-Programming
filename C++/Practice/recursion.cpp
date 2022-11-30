#include<bits/stdc++.h>
using namespace std;
void recursion(int n){
        if(n == 0){
            return;
        }
        recursion(n-1);
        cout<<n<<endl;
    }
int main(){
    int n;
    n = 10;
    recursion(n);
}