class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int fl = nums[0] , sl = -1 , index = 0 ;
        for(int i = 1 ; i<nums.size() ; i++){
            if(nums[i]>fl){
                sl = fl ;
                fl = nums[i] ;
                index = i ;
            }
            else if(nums[i] < fl && nums[i] > sl) sl = nums[i] ;
        }
        if(sl*2 > fl) return -1 ;
        else return index ;
    }
};
