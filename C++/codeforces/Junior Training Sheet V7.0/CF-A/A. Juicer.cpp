#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, b, d; 
    cin >> n >> b >> d;
    long long n;
    long long waste = 0;
    int count = 0;
    while(n--){
        long long orange; cin >> orange;
        if(orange <= b){
            waste += orange;
        }
        if(waste > d){
            count++;
            waste = 0;
        }
    }
    
    cout << count << endl;

    return 0;
}
