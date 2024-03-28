class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin() , s.end());
        sort(g.begin() , g.end());
        int a = 0;
        int b = 0;
        while (b < s.size() && a < g.size()) {
            if (s[b] >= g[a]) {
                a++;
            }
            b++;
        }
        return a;
    }
    
};
