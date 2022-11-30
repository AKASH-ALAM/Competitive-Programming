#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
 
    double n, t, k, d; cin >> n >> t >> k >> d;
    double time_one, time_tow, cake;
    time_one = (ceil(n/k)) * t;

    time_tow = t;
    cake = k;
    int i = 2;
    while (!(cake >= n)){
        if(t == d) {
            cake += (k+k);
            time_tow += t;
        }
        else if(t > d){
            if(time_tow >= d){
                cake += k;
                time_tow += d;
            }
            if(time_tow >= (t*i)){
                cake += k;
                time_tow += (t - d);
                i++;
            }
            //cout <<"Time : " << time_tow << " Cake : " << cake << endl;
        } else {
            time_tow += t;
            cake += k;
            if(time_tow > d){
                cake += (k+k);
            }
            //cout <<"Time : " << time_tow << " Cake : " << cake << endl;
        }
    }
    //cout << time_one << " " << time_tow << endl;
    if(time_one > time_tow) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}