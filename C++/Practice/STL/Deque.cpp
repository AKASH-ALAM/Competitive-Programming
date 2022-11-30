#include <bits/stdc++.h>
using namespace std;
int main(){
    deque <int> d;
    d.push_back(2);     // [2];
    d.push_back(5);     //[2, 5];
    d.push_front(3);    // [3, 2, 5];
    d.pop_back();       //[3, 2];
    d.pop_front();      //[2];
    for(auto x : d) cout << x << endl;
    return 0;
}