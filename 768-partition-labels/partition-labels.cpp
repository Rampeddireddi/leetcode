class Solution {
public:
    vector<int> partitionLabels(string s) {
      vector<int>v;
      unordered_map<char,int>mp;
      for(int i=0;i<s.size();i++)
      {
          mp[s[i]]=i;
      }
      int front=0;
      int last=0;
      last=mp[s[0]];
      for(int i=0;i<s.size();i++)
      {
          if(last==i)
          {
                v.push_back(last-front+1);
                front=last+1;
                last=mp[s[front]];
          }
          else
          {
              last=max(last,mp[s[i]]);
          }
      }
      return v;
    }
};