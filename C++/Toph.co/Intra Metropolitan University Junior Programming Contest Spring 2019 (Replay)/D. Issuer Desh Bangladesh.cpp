#include <iostream> 
#include <string> 

using namespace std;

int main(){
    int n, m, i = 1; cin>>n>>m;
    
    string temp;
    while(i <= n){
        string s;
        int r = 0;
        cin>>s>>r;
        if(r >= m){
            temp = s;
            m = r;
        }
    
        cout << "Day " <<i<<": " << temp << endl;
        i++;
    }
    return 0;
}

