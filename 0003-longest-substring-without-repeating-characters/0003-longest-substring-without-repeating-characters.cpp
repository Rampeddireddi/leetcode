class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int res=1;
       int front=0;
       if(s.empty())return 0;
       map<char,int>mp;
       for(int i=0;i<s.size();i++){
        if(mp.find(s[i])!=mp.end()){
            // res=max(res,i-mp[s[i]]);
            front=max(front,mp[s[i]]+1);
            // mp[s[i]]=i;
        }
        mp[s[i]]=i;
        res=max(res,i-front+1);
       } 
    //    res=max(res,(int)s.size()-front);
       return res;
    }
};