#include <iostream> 
#include <stdio.h>
#include <map> 
#include <iterator> 

using namespace std;

int main(){
    map <string, int> m;
    map <string, int>::iterator it;

    string name;
    int number;

    for(int i = 0; i < 5; i++){
        cin >> name >> number;
        m.insert(make_pair(name, number));
    }
    puts("");

    for(it = m.begin(); it != m.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}