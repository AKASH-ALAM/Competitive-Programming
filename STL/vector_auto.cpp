#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int size = 5;
    for(int i = 0; i < size; i++) {
        int a;  cin >> a;
        v.push_back(a);
    }
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    for(auto i : v) cout << i << endl; // A shorter way to iterate through a vector. 
}