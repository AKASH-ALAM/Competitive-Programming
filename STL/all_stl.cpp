#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(2);
    v.push_back(5);
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(3);
    sort(v.begin(), v.end()); cout << "sorted" <<endl;
    for(auto x : v) cout << x << endl;
    cout << endl;
    reverse(v.begin(), v.end());    cout << "reversed" << endl;
    for(auto x : v) cout << x << endl;
    cout << endl;
    random_shuffle(v.begin(), v.end()); cout << "shuffle value" << endl;
    for(auto x : v) cout << x << endl;
    cout << endl;
    set <int> s;
    s.insert(2);
    s.insert(4);
    s.insert(8);
    s.insert(10);
    s.insert(3);
    s.insert(5); cout << "printed set" << endl;
    for(auto x : s) cout << x << endl;
    cout << endl;
    cout << s.count(3) << endl;
    cout << endl << s.count(1) << endl;
    cout << endl;
    auto it = s.end(); it--;
    cout << "the biggest of set " << *it << endl;
    int x = 6;
    cout << "Find a nearest value of " << x << endl;
    auto i = s.lower_bound(x);
    if(i == s.begin()) cout << *i << endl;
    else if(i == s.end()) {
        i--; 
        cout << *i << endl;
    }
    else {
        int a = *i; i--;
        int b = *i;
        if(x-b < x-a) cout << b <<endl;
        else cout << a << endl;
    }

    return 0;
 }