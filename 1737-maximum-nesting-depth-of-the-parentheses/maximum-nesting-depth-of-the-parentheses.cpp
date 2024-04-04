class Solution {
public:
    int maxDepth(string s) {
        int r=0,b=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                b++;
                r=max(r,b);
            }
            else if(s[i]==')')b--;
        }
        return r;
    }
};