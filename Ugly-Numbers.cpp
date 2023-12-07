class Solution {
public:
    bool isUgly(int n) {
        if(n<1) return 0 ;
        while(n%2==0 || n%3==0 || n%5==0){
            if(n%2==0) n/=2 ;
            if(n%3==0) n/=3 ;
            if(n%5==0) n/=5 ;
            
        }
        if(n==1) return 1 ;
        else return 0 ;
    }
};
