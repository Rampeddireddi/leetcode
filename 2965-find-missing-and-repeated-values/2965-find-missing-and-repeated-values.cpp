class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int range=n*n;
        // vector<int>res;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[grid[i][j]]++;
            }
        }
        int c1=0;
        int c2=0;
        for(int i=1;i<=range;i++){
            if(mp[i]==2)c1=i;
            else if(mp[i]!=1 && mp.find(i)!=mp.end())c2=i;
        }
        return {c1,c2};
    }
};