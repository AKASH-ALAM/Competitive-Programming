#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main(){
    list <int> mylist;
    list <int>::iterator it;

    mylist.push_back(1);
    mylist.push_back(2);
    mylist.push_back(3);
    mylist.push_back(4);
    mylist.push_back(5);
    mylist.push_back(6);

    cout << mylist.front() << "\t";
    cout << mylist.back() << endl;

    mylist.pop_front();
    mylist.pop_back();

    for(it = mylist.begin(); it != mylist.end(); it++){
        cout << *it << "\t";
    }
    puts("");
    
    mylist.pop_front();
    mylist.pop_back();

    for(it = mylist.begin(); it != mylist.end(); it++){
        cout << *it << "\t";
    }
    puts("");

    return 0;
}