#include <bits/stdc++.h>
using namespace std;

class student {
    public:
        string name;
        double gpa;
        int roll;
};

int main(){
    student a;
    a.name = "Akash";
    a.roll = 372721;
    a.gpa = 3.50;

    cout << a.name << endl;
    cout << a.roll << endl;
    cout << a.gpa << endl;
    
    return 0;
}