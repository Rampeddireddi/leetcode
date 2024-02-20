class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int ma=0;
       unordered_map<char,int>mp;
       int front=0;
       for(int i=0;i<s.size();i++){
           if(mp.find(s[i])!=mp.end()){
               front=max(front,mp[s[i]]+1);
           }
           mp[s[i]]=i;
           ma=max(ma,i-front+1);
       }
       return ma;
    }
};
