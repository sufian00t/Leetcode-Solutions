class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<vector<int>> ss ;
        ss.insert(nums);
        
        while(next_permutation(nums.begin(), nums.end())) {
             ss.insert(nums);
        }
        vector<vector<int>> ans (ss.begin() , ss.end()) ;
        return ans ;
    }
};
