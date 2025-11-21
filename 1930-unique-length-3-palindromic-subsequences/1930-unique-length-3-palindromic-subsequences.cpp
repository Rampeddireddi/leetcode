class Solution {
public:
    int countPalindromicSubsequence(string s) {
        map<char,pair<int,int>>mp;
        int res=0;
        for(int i=0;i<s.size();i++){
            if(mp.find(s[i])!=mp.end()){
                res += i-mp[s[i]].first-1;
                mp[s[i]].first=i;
                mp[s[i]].second++; 
            }
            else mp[s[i]]={i,1};
        }
        for(auto i:mp){
            if(i.second.second>=3)res++;
        }
        return res;
    }
};