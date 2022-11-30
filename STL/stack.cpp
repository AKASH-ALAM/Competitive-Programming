#include <bits/stdc++.h>
using namespace std;

int main(){
    stack <string> s;
    s.push("Akash");
    s.push("Sajib");
    s.push("Salman");

    while(!s.empty()){
        string x;
        //x = s.top();
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}