#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int s;  cin >> s;
    char str[21][10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
    if(s >= 0 && s <= 20) cout << str[s] << endl;
    else if(s > 20 && s <= 30){
        if(s == 30) cout << "thirty" << endl;
        else cout << str[20] << "-" << str[s-20] << endl;
    }
    else if(s > 30 && s <= 40){
        if(s == 40) cout << "forty" << endl;
        else cout << "thirty" << "-" << str[s-30] << endl;
    }
    else if(s > 40 && s <= 50){
        if(s == 50) cout << "fifty" << endl;
        else cout << "forty" << "-" << str[s-40] << endl;
    }
    else if(s > 50 && s <= 60){
        if(s == 60) cout << "sixty" << endl;
        else cout << "fifty" << "-" << str[s-50] << endl;
    }
    else if(s > 60 && s <= 70){
        if(s == 70) cout << "seventy" << endl;
        else cout << "sixty" << "-" << str[s-60] << endl;
    }
    else if(s > 70 && s <= 80){
        if(s == 80) cout << "eighty" << endl;
        else cout << "seventy" << "-" << str[s-70] << endl;
    }
    else if(s > 80 && s <= 90){
        if(s == 90) cout << "ninety" << endl;
        else cout << "eighty" << "-" << str[s-80] << endl;
    }
    else if(s > 90 && s <= 100){
        if(s == 100) cout << "one hundred" << endl;
        else cout << "ninety" << "-" << str[s-90] << endl;
    }

    return 0;
}