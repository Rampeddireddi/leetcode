class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=*min_element(strs.begin(),strs.end());
        for(int i=0;i<s.size();i++){
            string a=s.substr(0,i+1);
            for(int j=0;j<strs.size();j++){
                if(strs[j].substr(0,i+1)!=a)return s.substr(0,i);
            }

        }
        return s;
     }
};