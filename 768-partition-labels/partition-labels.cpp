class Solution {
public:
    vector<int> partitionLabels(string s) {
    unordered_map<int,int>mp;
    for(int i=0;i<s.size();i++)mp[s[i]]=i;
    int first=0;
    int last=mp[s[0]];
    vector<int>v;
    for(int i=0;i<s.size();i++){
        if(last==i){
            v.push_back(last-first+1);
            first=i+1;
            last=mp[s[first]];
        }
        else{
            last=max(last,mp[s[i]]);
        }
    }  
    return v;
    }
};