class Solution {
public:
    bool isvowel(char c){
        if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') 
            return true;
        else return false;
    }
    int maxVowels(string s, int k) {
        int j = 0, MAX = INT_MIN, cnt = 0, size = s.size();
        for(int i = 0; i < size; i++){
            if(isvowel(s[i])) cnt++;
            if(i-j+1 > k){
                if(isvowel(s[j])) cnt--;
                j++;
            }
            MAX = max(MAX, cnt);
        }
        return MAX;
    }
};