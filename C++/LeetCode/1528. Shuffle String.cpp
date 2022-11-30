class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int size = s.size()+1;
        char shuffled[size];
        for(int i = 0; i < s.size(); i++){
            shuffled[indices[i]] = s[i];
        }
        shuffled[size-1] = '\0';
        return shuffled;
    }
};