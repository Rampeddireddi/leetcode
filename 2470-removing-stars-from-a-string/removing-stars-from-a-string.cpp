class Solution {
public:
    string removeStars(string s) {
        vector<char>v;
        for(int i=0;i<s.size();i++){
            if(s[i]=='*'){
                if(!v.empty())
                {
                    v.pop_back();
                }
            }
            else{
                v.push_back(s[i]);
            }
        }
        string res;
        for(int i=0;i<v.size();i++){
            res+=v[i];
        }
        return res;
    }
};