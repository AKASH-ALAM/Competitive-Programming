#include <iostream> 
#include <list>
#include <iterator>
#include <algorithm>

using namespace std;
int main(){
    list <int> mylist;
    list <int>::iterator it;

    mylist.push_back(4);
    mylist.push_back(5);
    mylist.push_back(6);
    mylist.push_back(33);
    mylist.push_back(11);

    it = mylist.begin();
    
    it++;

    mylist.insert(it, 7);
    cout << *it << endl;

    for(it = mylist.begin(); it != mylist.end(); it++){
        cout << *it << "\t";
    }
    puts("");

    it = find(mylist.begin(), mylist.end(), 33);
    if(it != mylist.end()) cout << "found\n";
    else cout << "not found\n";
    mylist.insert(it, 44);

    for(it = mylist.begin(); it != mylist.end(); it++){
        cout << *it << "\t";
    }
    puts("");
    return 0;
}