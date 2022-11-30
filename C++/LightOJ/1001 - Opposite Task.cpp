/* #include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, t; cin >> t;
    vector <int> v;
    vector <int>::iterator it, it2;
    
    while (t--){
        int min, plus = 0;
        cin >> n;
        if(n <= 10){
            it = find(v.begin(), v.end(), n);
            if(it == v.end()){
                v.push_back(n);
                cout << "0 " << n << endl;
            } 
            else { 
                min = n;
                for(int i = 0; i < 10; i++){
                    min--, plus++;
                    if(min < 0 || plus > 10){
                        cout << "0 " << 0 << endl;
                        break;
                    } 
                    it = find(v.begin(), v.end(), min);
                    it2 = find(v.begin(), v.end(), plus);
                    if(it == v.end() && it2 == v.end()){
                        v.push_back(min);
                        v.push_back(plus);
                        cout << plus << " " << min << endl;
                        break;
                    } 
                } 
            }
        } else {
            min = 10, plus = n - min;
            for(int i = 0; i < 10; i++){
                it = find(v.begin(), v.end(), min);
                it2 = find(v.begin(), v.end(), plus);
                if(it == v.end() && it2 == v.end()){
                    v.push_back(min);
                    v.push_back(plus);
                    cout << plus << " " << min << endl;
                    break;
                } 
                min--, plus++;
                if(min < 0 || plus > 10){
                    cout << "0 " << 0 << endl;
                    break;
                } 
            } 
        } //appropriate solution 
    }
    return 0;
} */

#include <iostream>

using namespace std;

int main(){
	int t, a, b;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> a;
		b = a / 2;
		a = a % 2 + a / 2;
		cout << a << " "<<b << endl;
	}		
    return 0;
}