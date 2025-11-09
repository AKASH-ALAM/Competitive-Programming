#include <algorithm>
#include <list>
#include <iterator>
#include <iostream>
using namespace std;

int main(){
    list <int> mylist;
    list <int>::iterator it;

    mylist.push_back(3);
    mylist.push_back(4);
    mylist.push_back(5);
    mylist.push_back(6);
    mylist.push_back(7);

    it = mylist.begin();
    mylist.erase(it);

    for(it = mylist.begin(); it != mylist.end(); it++){
        cout << *it << endl;
    } puts("");

    it = find(mylist.begin(), mylist.end(), 6);
    mylist.erase(it);

    for(it = mylist.begin(); it != mylist.end(); it++){
        cout << *it << endl;
    } puts("");

    it = find(mylist.begin(), mylist.end(), 1);
    
    if(it == mylist.end()){
        cout << "NOT FOUND" << endl;
    } else {
        mylist.erase(it);
        for(it = mylist.begin(); it != mylist.end(); it++){
            cout << *it << endl;
        }
    }

    return 0;
}