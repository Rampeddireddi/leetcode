class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        vector<string>v;
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==1)v.push_back(arr[i]);
        }
        if(v.size()<k)return "";
        return v[k-1];
    }
};