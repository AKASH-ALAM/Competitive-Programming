#include <bits/stdc++.h>
using namespace std;

double pi = acos(-1);
int main(){
    int t; cin >> t;
    for(int i = 1; i <= t; i++){
        double r, rr, square_area, circle_area;
        cin >> r;
        rr = r * 2;
        square_area = rr * rr, circle_area = pi * r * r;
        //cout << fixed << "Case " << i << ": " << setprecision(2) << square_area-circle_area << endl;
        printf("Case %d: %.2lf\n",i, square_area-circle_area);
    } return 0;
}