
#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define pf1(a) printf("%lld\n",a)
#define pf2(a,b) printf("%lld %lld\n",a,b)

int main() {

    ll tc, k, t = 1;

    sc2(tc, k);
    ll arr[tc];

    for(ll i = 0; i < tc; i++) {
        sc1(arr[i]);
    }

    sort(arr, arr+tc);

    ll ans = arr[0];
    cout << arr[0] << endl;

    ll mini = INT_MAX, ck = 1;
    for(ll i = 1; i < tc; i++) {
        if(ck >= k) break;
        if(arr[i] - ans > 0) {
            cout << arr[i] - ans << endl;
            ans += arr[i] - ans;
            ck++;
        }
    }
    if(ck < k){
        for(ll i = ck; i < k; i++){
            cout << "0" << endl;
        }
    }

    return 0;
}