#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {2,3,3,5,7,8,8,8};
    random_shuffle(v.begin(), v.end());
    for(auto i : v) cout << i << " ";

    reverse(v.begin(), v.end()); cout << endl;
    for(auto i : v) cout << i << " ";

    sort(v.begin(), v.end());   cout << endl;
    for(auto i : v) cout << i << " ";
    cout << endl;

    auto a = lower_bound(v.begin(), v.end(), 4);//at least 4
    auto b = upper_bound(v.begin(), v.end(), 6);//bigger than 4
    cout << *a << " " << *b << endl;

    v.erase(unique(v.begin(), v.end()), v.end()); //for unique value
    for(auto i : v) cout << i << " ";
    cout << endl;
    

}
