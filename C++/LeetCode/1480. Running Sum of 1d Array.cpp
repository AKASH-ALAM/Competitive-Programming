class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> v;
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            cnt += nums[i];
            v.push_back(cnt);
        }
        return v;
    }
};