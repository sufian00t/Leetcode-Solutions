class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum = accumulate(apple.begin() , apple.end() ,0);
        sort(capacity.rbegin() , capacity.rend()) ;
        int ans = 0  , cnt = 0;
        for(int i = 0 ; i<capacity.size() ; i++){
            if(ans>=sum) break ;
            else{
                ans+=capacity[i];
                cnt++ ;
            }
        }
        return cnt ;
    }
};
