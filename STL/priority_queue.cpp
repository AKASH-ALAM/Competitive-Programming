#include <bits/stdc++.h>
using namespace std;

class Compare {
public:
    bool operator()(pair <int, int> a, pair <int, int> b) {
        if (a.first < b.first) return true;
        else if (a.first == b.first and a.second > b.second) return true;
        return false;
    }
};


int main() {
    priority_queue <pair<int, int>, vector <pair<int, int>>,  Compare> pq;

    while (!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }
    cout << endl;
    
    priority_queue <int, vector <int>, greater <int>> pv;
    pv.push(2);
    pv.push(1);
    pv.push(3);
    pv.push(0);
    pv.push(5);

    while (!pv.empty()) {
        cout << pv.top() << endl;
        pv.pop();
    }

    return 0;
}