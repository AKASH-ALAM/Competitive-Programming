#include <bits/stdc++.h>
using namespace std;

int main(){
    multiset <int> ms;
    multiset <int>::iterator it;

    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);

    for(it = ms.begin(); it != ms.end(); it++){
        cout << *it << endl;
    }

    return 0;
}