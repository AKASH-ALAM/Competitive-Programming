#include <iostream> 
#include <map> 
#include <string>
#include <algorithm>
#include <string.h>
#include <stdlib.h>
#include <iterator> 

using namespace std;

int main(){
    int n, t; 
    cin >> n;
    t = n;
    map <string, int> m;
    while(n--){
        string name; int number;
        cin >> name >> number;
        m.insert(make_pair(name, number));
    }

    map <string, int>::iterator it;

    while(t--){
        string name; cin >> name;
        it = m.find(name);
        if(it != m.end()){
            cout << it->first <<"=" << it->second << endl;
        } else {
            cout << "Not found" << endl;
        }
    }
    return 0;
}