#include <bits/stdc++.h>
//#define endl        '\n'
#define pi          2*acos(0.0)
#define pb(a)       push_back(a)
#define db          double
#define ld          long double
#define ll          long long
#define ull         unsigned long long
#define mod         1000000007
#define inf         1000000000000000001
#define sqr(x)      (x) * (x)
#define gcd(a, b)   __gcd(a, b)
#define lcm(a, b)   ((a/gcd(a,b)) * b) 
#define Fast_io    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define MAX 32001
using namespace std;
 
 int rev(int a, int b){
            return a > b;
    }

int main(){
    //Fast_io;
    int n;  cin >> n;
    vector <int> planks;
    vector <int>::iterator it;
    for(int i = 0; i < n; i++) {
        int tmp;    cin >> tmp;
        planks.pb(tmp);
    }

    int *array = (int*) malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++) array[i] = 1;

    int q;  cin >> q;
    while(q--){
        char sign;  cin >> sign;
        int x;  cin >> x;
     
        if(sign == '+'){
            planks.pb(x);
            cout << "x : " << x << endl;
        } else {
            it = find(planks.begin(), planks.end(), x);
            planks.erase(it);
        }

        sort(planks.begin(), planks.end());
        for(int i = 0; i < planks.size(); i++)  cout << planks[i] << " ";
        cout << endl;
        
         for(int i = 0, j = 0; i < planks.size(); i++){
            if(planks[i] == planks[i+1])    array[j]++;
            else j++;
        } // here is a some problem.

        sort(array, array+n, rev);
        
        cout << "array : ";
        for(int i = 0; i < n; i++) cout << array[i] << " ";
        cout << endl;

        int s = 0, r = 0;
        for(int i = 0; i < n; i++){
            if(array[i] >= 4){
                s++;
                array[i] -= 4;
                break;
            }
        }

        for(int i = 0; i < n; i++){
            if(array[i] >= 2){
                r++;
                array[i] -= 2;
            }
            if(r == 2) break;
        }

        cout << "s : " << s << " r : " << r << endl;  
        if(s==1 && r == 2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}