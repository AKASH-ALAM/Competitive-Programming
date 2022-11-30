#include <bits/stdc++.h>
#define endl '\n'
#define first_io ios_base::sync_with_stdio(false), cin.tie(NULL);
using namespace std;

int main(){
    first_io;
    string s1, s2;
    
    while(cin >> s1 >> s2){
        if(s1 == "0" || s2 == "0"){
            cout << 0 << endl;
            continue;
        }
        int len1 = s1.length(), len2 = s2.length(), size = len1+len2;
        int a[size] = {0};
        int carry = 0, product, sum, k = 1;
        for(int i = len2-1; i >= 0; i--){
            for(int j = len1-1, l = size - k; j >= 0; j--, l--){
                product = (s1[j] - '0') * (s2[i] - '0');
                sum = product + a[l] + carry;
                if(sum < 10) carry = 0;
                if(sum >= 10){
                    carry = sum / 10;
                    sum = sum % 10;
                } 
                a[l] = sum;
                 if(j==0){
                    l--;
                    a[l] = carry;
                    carry = 0;
                 } 
            }carry = 0;
            k++;
        }
        int flag = 1;
        for(int i = 0; i < size; i++){
            if(flag){
                if(a[i] != 0) flag = 0;
            } 
            if(!flag)   cout << a[i];
        } cout << endl;
    }

    return 0;
}