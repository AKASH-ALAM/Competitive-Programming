#include <stdio.h> 
#include <string.h>
#include <iostream>
#include <string>
using namespace std;


int main(){
    int t; scanf("%d", &t);
    
    while(t--){
        string s, ss, temp;
        cin >> s >> ss;
        if(s.length() > ss.length()){
            temp = s;
            s = ss;
            ss = temp;
            //cout << s << " "<< ss << endl;
        }
        
        int s_tmp = 0;
        for(int i = 0; ss[i] != '\0'; i++){ // m,i,b,(s),b,b,c,(s),dea
            for(int j = s_tmp; s[j] != '\0'; j++){
                if(s[j] == ss[i]){ //sasha
                    printf("%c", s[j]);
                    s_tmp = j+1;
                }
            }
        } puts("");
    }
    return 0;
}
