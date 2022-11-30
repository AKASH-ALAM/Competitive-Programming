#include <bits/stdc++.h>
using namespace std;

int main(){
    set <string> s;
    set <string>::iterator it;

    s.insert("Akash");
    s.insert("Sajib");
    s.insert("Sajib");
    s.insert("Sajib");
    s.insert("Salman");

    pair< set <string>::iterator, bool> p;
    
    p = s.insert("Salman");

    if(p.second == false) cout << "Can't insert!" <<endl;
    else cout << "Inserted" << endl;

    for(it = s.begin(); it != s.end(); it++){
        cout << *it << endl;
    }

    return 0;
}