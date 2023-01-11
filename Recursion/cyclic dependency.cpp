#include <bits/stdc++.h>
using namespace std;

struct func{
    void f(int n){
        cout << "f(" << n << ")" << endl;
        if(n == 1) return;
        g(n-1);
        f(n-1);
    }
    
    void g(int n){
        cout << "f(" << n << ")" << endl;
        if(n == 1) return;
        f(n-1);
        g(n-1);
    }
};

int main(){
    func obj;
    obj.f(3);

    return 0;
}