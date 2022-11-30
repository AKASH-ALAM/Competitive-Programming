#include <iostream> 
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int arry[10], i, j;

    for(i = 0; i < 10; i++) arry[i] = 0;

    int arry2[10];
    char ch;
    for(i = 0; i < s.size(); i++){
        int index = s[i] - '0';
        //cout << index;
        arry[index]++;
    }
    //puts("");
    for(i = 0; i < 10; i++){
        arry2[i] = arry[i];
    }

    /* for(i = 0; i < 10; i++){
        cout << arry[i] << " ";
    }
    cout << endl; */

    sort(arry2, arry2+10);

    /* for(i = 0; i < 10; i++){
        cout << arry2[i] << " ";
    } puts("");
 */
    int digit;
    for(i = 0; i < 10; i++){
        if(arry2[9] == arry[i]){
            digit = i;
            break;
        }
    }
    cout << digit << endl;
    
    return 0;
}