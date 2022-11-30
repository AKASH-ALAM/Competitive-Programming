#include <bits/stdc++.h>
using namespace std;

int main(){ 
    priority_queue <string> q;
    q.push("Alam");
    q.push("Pakhi");
    q.push("Sallu");
    q.push("Sajib");
    q.push("Rasel");
    q.push("Akash");

    while(!q.empty()){
        string s = q.top();
        cout << s << endl;
        q.pop();
    }

    priority_queue <int> pq;
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(1);
    pq.push(10);
    pq.pop(); // 10
    pq.pop(); // 4

    while(!pq.empty()) {
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

    while(!pv.empty()) {
        cout << pv.top() << endl;
        pv.pop();
    }

    return 0;
}