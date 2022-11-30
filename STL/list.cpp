#include <iostream> 
#include <list> 
#include <iterator> 

using namespace std;
int main(){ 
    list <int> mylist;
    list <int>::iterator it;

    mylist.push_back(4);
    mylist.push_back(3);
    mylist.push_front(2);
    mylist.push_front(1);
    mylist.push_back(5);
    mylist.push_front(0);

    for(it = mylist.begin(); it!= mylist.end(); it++){
        cout << *it << endl;
    }

    puts("");

    mylist.reverse();

    for(it = mylist.begin(); it != mylist.end(); it++){
        cout << *it << endl;
    }
    
    mylist.clear();

    cout << "Last time has not printed" << endl;
    for(it = mylist.begin(); it != mylist.end(); it++){
        cout << *it << endl;
    }

    //same as vactor 
    // Here we can add data in front but of vector we can not;
    return 0;
}