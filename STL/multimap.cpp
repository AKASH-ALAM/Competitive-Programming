#include <bits/stdc++.h>
using namespace std;

int main(){
    multimap <string, int> mp;
    multimap <string, int>::iterator it;

    mp.insert(make_pair("Salman", 10));
    mp.insert(make_pair("Akash", 11));
    mp.insert(make_pair("Salman", 10));
    mp.insert(make_pair("Sajib", 22));
    mp.insert(make_pair("Salman", 10));

    for(it = mp.begin(); it != mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    return 0;

}