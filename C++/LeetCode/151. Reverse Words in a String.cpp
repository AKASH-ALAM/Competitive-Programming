class Solution {
public:
    string reverseWords(string s) {
        stack <string> stk;
        stringstream st(s);
        string word;
        while(st >> word){
            stk.push(word);
        }
        string b;
        while(!stk.empty()){
            b += stk.top();
            stk.pop();
            if(stk.empty()) break;
            b += " ";
        }
        //int n = b.size()-1;
        //b[n] = '\0';
        return b;
    }
};