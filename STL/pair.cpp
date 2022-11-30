#include <iostream> 
#include <iterator> 
#include <vector>
#include <utility> 
using namespace std;

int main(){
    int a, b;
    vector < pair <int, int> > p;
    vector < pair <int, int> >::iterator it;
    int t; cin >> t;

    while(t--){
        cin >> a >> b;
        p.push_back(make_pair(a, b));
    }
    for(it = p.begin(); it != p.end(); it++){
        cout << it->first << " " << it->second <<endl;
    }
    
    return 0;
}