#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, x, d, total = 0, distress = 0; cin >> n >> x;
    total = x;
    char c;
    while(n--){
        cin >> c >> d;
        if(c == '+') total += d;
        else {
            if(total < d){
                distress++;
            } else {
                total -= d;
            }
        }
    } cout << total << " " << distress << endl;

    return 0;
}