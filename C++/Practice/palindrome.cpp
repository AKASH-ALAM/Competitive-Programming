#include<bits/stdc++.h>
using namespace std;
int main(){
    int num, n, reminder, rev = 0;
    cout<<"Enter a number: ";
    cin>>num;
    n = num;
    while(num > 0){
        reminder = num % 10;
        rev = rev * 10 + reminder;
        num = num / 10;
       // cout<<"Reminder: "<<reminder<<endl<<"Revarse: "<<rev<<endl<<"Number: "<<num<<endl;
    }
    if(n == rev){
        cout<<"This is a palindrome number"<<endl;
    }
    else
    {
        cout<<"This is not a palindrome number"<<endl;
    }
    return 0;
}