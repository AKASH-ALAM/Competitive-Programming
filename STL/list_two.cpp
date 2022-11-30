#include <bits/stdc++.h>
using namespace std;
bool myfunc(int a, int b){
    return (a > b);
}
int main(){
    int arry[5] = {1, 3, 4, 5, 0};
    list <int> mylist(arry, arry+5);
    list <int>::iterator it;
    mylist.push_front(10);
    mylist.push_back(20);
    it = find(mylist.begin(), mylist.end(), 5);
    
    mylist.insert(it, 6);

    mylist.sort();
    for(it = mylist.begin(); it != mylist.end(); it++){
        cout << *it << "\t";
    } cout << "\n";

    mylist.sort(myfunc); // decending order
   // mylist.reverse();
    for(it = mylist.begin(); it != mylist.end(); it++){
        cout << *it << "\t";
    } cout << "\n";

    it = find(mylist.begin(), mylist.end(), 4);
    mylist.erase(it);
    if(it == mylist.end()) {
        cout << "NOT FOUND\n";
    } else cout << "\t\tREMOVE YOUR DESIRE VALUE\n";
    
    for(it = mylist.begin(); it != mylist.end(); it++){
        cout << *it << "\t";
    } cout << "\n";
    
    return 0;
}