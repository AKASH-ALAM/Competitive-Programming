#include <bits/stdc++.h>
using namespace std;
int main(){
    bitset <10> s;
    s[2] = 1;
    s[1] = 1;
    s[3] = 1;
    s[4] = 1;
    s[7] = 1;
    cout << s[5] << endl << s[7] << endl;
    bitset <10> b(string("0010011010")); // from right to left.
    cout << b[1] << " " << b[2] << endl;
    cout << b.count() << endl; // 1 appear.

    cout << "bit operations" << endl;
    bitset <10> a(string("0010110110"));
    bitset <10> c(string("1011011000"));
    cout << (a | b) << endl;
    cout << (a & b) << endl;
    cout << (a ^ b) << endl;
}