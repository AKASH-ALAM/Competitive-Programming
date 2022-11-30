class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector <int> v; 
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] > nums[j] and i != j) cnt++;
            }
            v.push_back(cnt);
            cnt = 0;
        }
        return v;
    }
};