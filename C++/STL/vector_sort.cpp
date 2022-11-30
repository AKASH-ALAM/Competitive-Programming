#include <iostream> 
#include <vector> 
#include <iterator> 
#include <algorithm> 

using namespace std;

int myfunc(int a, int b){
    return (a > b);
} // sort for decending order

int main(){
    vector <int> vec;
    vector <int>::iterator it;

    vec.push_back(4);
    vec.push_back(3);
    vec.push_back(8);
    vec.push_back(1);

    sort(vec.begin(), vec.end(), myfunc);
    
    for(it = vec.begin(); it != vec.end(); it++){
        cout << *it << " ";
    }
    puts("");

    vec.clear();

    for(it = vec.begin(); it != vec.end(); it++){
        cout << *it << " ";
    }

    return 0;
}