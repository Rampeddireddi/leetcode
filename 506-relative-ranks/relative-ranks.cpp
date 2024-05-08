class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>s(score.size(),".");
        unordered_map<int,int>mp;
        vector<int>v(score.size(),0);
        vector<int>backup;
        for(int i=0;i<score.size();i++)backup.push_back(score[i]);
        sort(score.rbegin(),score.rend());
        for(int i=0;i<score.size();i++)mp[score[i]]=i;
        for(int i=0;i<score.size();i++){
            v[i]=mp[backup[i]];
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==0)s[i]="Gold Medal";
            else if(v[i]==1)s[i]="Silver Medal";
            else if(v[i]==2)s[i]="Bronze Medal";
            else s[i]=to_string(v[i]+1);
        }
        return s;
    }
};