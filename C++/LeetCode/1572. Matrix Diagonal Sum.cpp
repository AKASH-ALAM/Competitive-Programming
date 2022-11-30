class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0, n = mat.size();
        if(n == 1) return mat[0][0];
        for(int i = 0; i < n; i++){
            sum += mat[i][i];
            if(i+i != i + (n-1-i)){ //ignore middle value of second diagonal
                sum += mat[i][n-1-i];
            }
        }
        return sum;
    }
};