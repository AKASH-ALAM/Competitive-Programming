#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main(){
    int array[] = {1, 2, 3, 4, 5, 6};
    list <int> mylist(array, array+6);
    list <int>::iterator it;

    for(it = mylist.begin(); it != mylist.end(); it++){
        cout << *it << endl;
    }

    return 0;
}