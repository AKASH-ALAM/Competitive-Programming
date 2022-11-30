class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector <vector <int> > v(A.size());
        for(int i = 0; i < A.size(); i++){
            reverse(A[i].begin(), A[i].end());
            for(int j = 0; j < A[i].size(); j++){
                if(A[i][j] == 1) v[i].push_back(0);
                else v[i].push_back(1);
            }
        }
        return v;
    }
};