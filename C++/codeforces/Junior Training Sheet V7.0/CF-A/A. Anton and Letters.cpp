#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main(){
    char ch;
    set <char> st;
    set <char>::iterator it;
    while(ch != '\n'){
        scanf("%c", &ch);
        if(ch == ' ' || ch == ',' || ch == '{' || ch == '}' || ch == '\n'){
            continue;
        }
        st.insert(ch);
    }
    /* for(it = st.begin(); it != st.end(); it++){
        cout << *it;
    } cout << endl; */
 
    cout << st.size()<< endl;
    return 0;
}