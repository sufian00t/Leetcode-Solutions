class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr = 0 ;
        int ans = -10001 ;
        int initans = *max_element(nums.begin() , nums.end()) ;
        for(int i = 0 ; i<nums.size() ; i++){
            curr+=nums[i] ;
            ans = max(curr , ans) ;
            if(curr<0) curr = 0 ;
        }
        if(ans>initans) return ans ;
        else return initans ;


    }
};
