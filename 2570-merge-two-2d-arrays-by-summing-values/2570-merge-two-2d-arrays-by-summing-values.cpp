class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector<vector<int>>res;
        map<int,int>mp;
        int n=nums1.size(),m=nums2.size();
        for(int i=0;i<n;i++){
            mp[nums1[i][0]]=nums1[i][1];
        }
        for(int i=0;i<m;i++){
            if(mp.find(nums2[i][0])!=mp.end()){
                mp[nums2[i][0]]=mp[nums2[i][0]]+nums2[i][1];
            }
            else mp[nums2[i][0]]=nums2[i][1];
        }
        for(auto i: mp){
            res.push_back({i.first,i.second});
        }
        return res;
    }
};