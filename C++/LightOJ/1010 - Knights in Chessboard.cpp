/* #include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, temp_m; cin >> t;
    for(int i = 1; i <= t; i++){
        int m, n; cin >> m >> n;
        temp_m = m * n;
        if((m == 2) && (n % 2 != 0)) cout <<"Case "<< i <<": "<< n+1 << endl;
        else if(m <= 2 && n <= 2) cout <<"Case "<< i <<": "<< n*m << endl;
        else
            cout <<"Case "<< i <<": "<< (temp_m / 2) + (temp_m % 2) << endl;
    }
    return 0;
} */
// this is not appropiat solution.
// wrong answer please don't submit this code. :(