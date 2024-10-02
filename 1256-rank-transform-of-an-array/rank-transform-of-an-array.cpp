class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>subres=arr;
        sort(subres.begin(),subres.end());
        int rank=1;
        map<int,int>rmap;
        if(subres.size()>=1)rmap[subres[0]]=rank;
        for(int i=1;i<subres.size();i++){
            if(subres[i]!=subres[i-1])
         {   rmap[subres[i]]=rank+1;
            rank++;
            }
        }
        vector<int>res;
        for(int i=0;i<arr.size();i++){
            res.push_back(rmap[arr[i]]);
        }
        return res;
    }
};