class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     sort(strs.begin(),strs.end());
     string result="";
     int n=strs.size();
     if(n==0)return result;
     if(n==1)return strs[0];
     string s1=strs[0];
     string s2=strs[n-1];
     int len = s1.size()>s2.size()?s2.size():s1.size();
     for(int i=0;i<len;i++){
        if(s1[i]==s2[i])result+=s1[i];
        else break;
     }
     return result;
    }
};