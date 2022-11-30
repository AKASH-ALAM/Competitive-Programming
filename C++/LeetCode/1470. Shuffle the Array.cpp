class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> list;
        for(int i = 0; i < n; i++){
            list.push_back(nums[i]);
            list.push_back(nums[n+i]);
        }
         return list;
    }
   
};