class Solution {
public:
    bool isValid(string s) {
        stack<char> ss ;
        int sz = s.size() ;
        for(int i = 0 ; i<s.size() ; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                ss.push(s[i]) ;
                sz--;
            } 
            else if(!ss.empty() && s[i] == ')' && ss.top() == '('){
                 ss.pop() ;
                 sz-- ;
            } 
            else if(!ss.empty() && s[i] == '}' && ss.top() == '{'){
                ss.pop() ;
                sz-- ;
            } 
            else if(!ss.empty() && s[i] == ']' && ss.top() == '['){
                  ss.pop() ;
                  sz-- ;
            } 
        }
        if(!ss.empty() || (ss.empty() && sz>0)) return 0 ;
        else return 1 ;
    }
};
