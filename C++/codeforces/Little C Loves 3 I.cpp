/*
#include <iostream>
using namespace std;
int main() {
    long long n, result, a;
    cin>>n;
    long long mul = n / 3;
    if(mul % 3 == 0){
        a = mul - 1;
        a = a * 2;
        long long result = n - a;
        if(result % 3 == 0)
        {
            a = mul + 1;
            a = a * 2;
            result = n - a;
            cout << mul + 1 << " " << mul + 1 << " " << result << endl;
        }
        else{
            cout << mul - 1 << " " << mul - 1 << " " << result << endl;
        }
    }
    else{
        if(n != mul * 3){
            int temp = mul;
            mul = mul + mul;
            result = n - mul;
            if(result % 3 == 0){
                a = temp + 1;
                if(a % 3 == 0){
                    a = temp - 1;
                    a = a + a;
                    result = n - a;
                    cout << temp - 1 << " " << temp - 1 << " " << result << endl;
                }
                else{
                    a = a * 2;
                    result = n - a;
                    cout << temp + 1 << " " << temp + 1 << " " << result <<endl;
                }
            }
            else
                cout << temp << " " << temp << " " << result << endl;
        }
        else
            cout << mul << " " << mul << " " << mul << endl;
    }
    return 0;
}
*/

#include <iostream>
#define endl '\n'
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin>>n;
    if(n % 3 == 0) cout<<1<<" "<<1<<" "<<n-2<<endl;
    else cout<<1<<" "<<2<<" "<<n-3<<endl;
    return 0;
}