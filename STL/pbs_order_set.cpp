#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

 //defining template when all elements are distinct
template <class T> using orderset = tree<T, null_type,
less<T>, rb_tree_tag,tree_order_statistics_node_update>;

 //defining template when duplicate elements are also used
template <class T> using multiorderset = tree<T, null_type,
less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;

/* order_of_key(k): Returns the number of elements strictly smaller than k.
   find_by_order(k): Returns the address of the element at kth index in the set while using zero-based indexing,
 i.e the first element is at index zero.*/

int main() {
    orderset <int> s;
    s.insert(10);
    s.insert(2);
    s.insert(-2);

    multiorderset <string> sohel;

    sohel.insert("soheli");
    sohel.insert("soheli");
    sohel.insert("heyarmaje");
    sohel.insert("lokiyeache");
    sohel.insert("dekhteamipayni");
    sohel.insert("tare");

    for(int it : s) cout << it << endl;
    for(string sh : sohel) cout << sh << " ";
    puts("");

    orderset <pair <string, int>> hiya;
    hiya.insert({"Sohel", 1});
    auto it = hiya.begin();

    cout << it->first << "->" << it->second << endl;

    multiorderset <pair<int,int> > a;
    a.insert({1,0});
    a.insert({12,0});
    a.insert({1,0});
    a.insert({12,0});
    a.insert({17,78});
    a.insert({17,40});
    a.insert({17,40});
    a.insert({12,0});
    a.insert({112,22});
    a.insert({7,12});
    a.insert({12,0});
    a.insert({9,112});
    cout << (a.find_by_order(2))->first<<" "<<(a.find_by_order(2))->second << endl; //output is 7 12
    cout << (a.find_by_order(5))->first<<" "<<(a.find_by_order(5))->second << endl; //output is 12 0
    cout << (a.order_of_key({10,12})) << endl; //output is 4
    cout << (a.order_of_key({12,0})) << endl; //output is 4
    cout << (a.order_of_key({12,1})) << endl; //output is 8

    return 0;
}
