class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int ma=0;
      for(int i=0;i<s.size();i++){
          map<char,int>mp;
          for(int j=i;j<s.size();j++)
          {
              mp[s[j]]++;
              if(mp[s[j]]>1){
                  int siz=mp.size();
                  ma=max(ma,siz);
                  break;
              }
          }
          if(mp.size()>ma)ma=mp.size();
          if(ma==s.size())break;
      }
      return ma;
    }
};