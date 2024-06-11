class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    //  sort(arr1.begin(),arr1.end());
    //  vector<int>res=arr2;
    //  for(int i=0;i<arr1.size();i++){
    //     if(find(res.begin(),res.end(),arr1[i])==res.end())res.push_back(arr1[i]);
    //  }
    //  return res;
        vector<int>res;
        map<int,int>mp;
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<arr1.size();i++)mp[arr1[i]]++;
        for(int i=0;i<arr2.size();i++){
            if(mp.find(arr2[i])!=mp.end()){
                while(mp[arr2[i]]!=0)
                {
                    res.push_back(arr2[i]);
                    mp[arr2[i]]-=1;
            }
            }
            else res.push_back(arr2[i]);
        }
        
         for(int i=0;i<arr1.size();i++){
        if(find(res.begin(),res.end(),arr1[i])==res.end())
        {
            while(mp[arr1[i]]!=0){
        res.push_back(arr1[i]);
            mp[arr1[i]]-=1;
            }
      }
         }
    return res;
    }
};