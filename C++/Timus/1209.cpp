#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector <int> v;
    vector <int>::iterator it;

    long long cnt = 1;
    for(int i = 0; cnt <= 2147483648; i++){
        cnt = cnt + i;
        v.push_back(cnt);
    }
    int n; cin >> n;
    long long k;
    for(int i = 0; i < n; i++){
       cin >> k;
       //it = find(v.begin(), v.end(), k);
       if(binary_search(v.begin(), v.end(), k)){
           cout << "1";
           if(i < n - 1) cout << " ";
       } else {
           cout << "0";
           if(i < n - 1) cout << " ";
       }
    }  cout << endl;

    /* for(it = v.begin(); it != v.end(); it++) cout << *it << " ";
    puts(""); */

    return 0;
}
