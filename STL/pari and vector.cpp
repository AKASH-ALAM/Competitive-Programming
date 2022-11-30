#include <bits/stdc++.h>
using namespace std;

int main(){
    vector < pair <int, string> > v;
    vector < pair <int, string> >::iterator it;

    v.push_back(make_pair(1, "Akash"));
    v.push_back(make_pair(2, "Sajib"));

    for(it = v.begin(); it != v.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}