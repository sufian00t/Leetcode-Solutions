class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bp = prices[0] ;
        int ans = 0 ;
        for(int i = 1 ; i<prices.size() ; i++){
            bp = min(bp , prices[i]) ;
            ans = max(ans , prices[i]-bp) ;
        }
        return ans ;
    }
};
