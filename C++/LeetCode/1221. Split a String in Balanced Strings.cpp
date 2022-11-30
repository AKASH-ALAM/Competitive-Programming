class Solution {
public:
    int balancedStringSplit(string s) {
        int l = 0, r = 0, cnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'L') l++;
            if(s[i] == 'R') r++;
            if(r == l) {
                cnt++; 
                l = 0, r = 0;
            }
        }
        return cnt;
    }
};