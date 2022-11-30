#include <bits/stdc++.h>
#define endl '\n'
#define pi 2 * acos(0)

using namespace std;
int main(){
    int t; cin >> t;
    for(int i = 1; i <= t; i++){
        double r, R, A ;
        cin >> r;
        A = pi * (r*r);
        //cout << "A = " << A << endl;
        R = pow((r+r), 2);
        //cout << "R = " << R << endl;
        printf("Case %d: %0.2lf\n",i, (R - A));
    }
    return 0;
}

