class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <bool> v;
        int greatest = 0;
        for(auto x : candies){
            if(x > greatest) greatest = x;
        }
        for(int i = 0; i < candies.size(); i++){
            if(candies[i]+extraCandies >= greatest) v.push_back(true);
            else v.push_back(false);
        }
        return v;
    }
};