/* #include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long n, m, a;
    cin >> n >> m;
    unsigned long long left_s = m, left_a = a;
    while(n--){
        int count = 0;
        cin >> a;
        if(a < left_s){
            cout << count << " ";
            left_s = left_s - a;
        } else {
            count++;
            left_a = a - left_s;
            if(left_a >= m){
                while(!(left_a < m)){
                    count++;
                    left_a = left_a - m;
                }
            }
            left_s = m - left_a;
            cout << count << " ";
        }
    } cout << endl;
    return 0;
} */

#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, current_s = 0, ans;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        int a, current_a;
        cin >> a;
        current_a = a + current_s;
        //cout << "current_a: " << current_a << endl;
        ans = current_a / m;
        current_s = current_a % m;
        //cout << "current_s: " << current_s << endl;
        cout << ans;
        if(i != n) cout << " ";
    } puts("");
    return 0;
}