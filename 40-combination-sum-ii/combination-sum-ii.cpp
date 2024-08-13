class Solution {
public:
vector<vector<int>>res;
set<vector<int>>se;
void Ram(int f,int e,int s,vector<int>v,int t,vector<int>&sr){
    if(s>=t){
        if(s==t){
            res.push_back(sr);
            return;
        }
        return;
    }
    if(f>=e)return;
    
    sr.push_back(v[f]);
    Ram(f+1,e,s+v[f],v,t,sr);
    while(f+1 < e && v[f] == v[f+1]) 
    {
        f++;
    }  //coz there are cases with same sets,
    sr.pop_back();
    Ram(f+1,e,s,v,t,sr);
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>sr;
        // se.clear();
        res.clear();
        sort(candidates.begin(),candidates.end());
        Ram(0,candidates.size(),0,candidates,target,sr);
        //  for(auto i:se)res.push_back(i);
        return res;
    }
};