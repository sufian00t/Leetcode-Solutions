class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        string s = "" ;
        int sum1 = accumulate(nums.begin() , nums.end() , 0) ;
        int sum2 = 0 ;
        for(int i = 0 ; i<nums.size() ; i++) s+=(to_string(nums[i])) ;
        for(int i = 0 ; i<s.size() ; i++) sum2+=(s[i]-'0') ;
        return abs(sum1-sum2) ;
    }
};
