#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin >> n;
    if(n < 0) cout << "Not palindrome" << endl;
    unsigned int tmp = 0, m = n;
    while(n != 0){
        tmp = (tmp * 10) + n % 10;
        n /= 10;
    }
    cout << (tmp == m ? "Palindrome" : "Not plindrome") << endl;
    return 0;
}