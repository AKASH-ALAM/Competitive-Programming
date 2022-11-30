#include <bits/stdc++.h>
using namespace std;

int main(){
    int y, w;   cin >> y >> w;
    
    if((y == 6 && w == 5) || (y == 5 && w == 6) || y == 6 && w == 6){
        cout << "1/6" << "\n";
        return 0;
    }

    int big; 
    if (y > w) big = y; 
    else big = w;


    int numerator = (6 - big) + 1;
    
    int denominator = 6;
    if((6 % numerator) == 0){
        denominator = 6 / numerator;
        numerator = 1;
    } else {
        if(numerator % 2 == 0){
            numerator = numerator / 2;
            denominator = denominator / 2;
        }
    }

    cout << numerator << "/" << denominator << "\n";
    return 0;
}