#include <bits/stdc++.h>
using namespace std;

int main(){
    /* ios_base::sync_with_stdio(false);
    cin.tie(NULL); */
    
    string s1, s2;
    char c1, c2;
    int len = 0;

    while (c1 != '\n'){
       scanf("%c", &c1);
       if(c1 >= 'A' && c1 <= 'Z'){
           c1 = (c1 - 'A') + 'a';
       }
       s1 += c1;
       len++;
    }

    while (c2 != '\n'){
       scanf("%c", &c2);
       if(c2 >= 'A' && c2 <= 'Z'){
           c2 = (c2 - 'A') + 'a';
       }
       s2 += c2;
    }
    
    
    int check;
    for(int i = 0; i < len - 1; i++){
        if(s1[i] == s2[i]){
            check = 0;
        } else if(s1[i] > s2[i]){
            check = 1;
            break;
        } else {
            check = -1;
            break;
        }
    } cout << check << endl;

    return 0;
}