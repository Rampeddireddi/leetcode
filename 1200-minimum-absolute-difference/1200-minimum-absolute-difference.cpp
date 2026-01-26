class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int mindiff=INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                if(abs(arr[i]-arr[j])<mindiff)mindiff=abs(arr[i]-arr[j]);
            }
        }
        vector<vector<int>>res;
        
         for(int i=0;i<arr.size();i++){
            vector<int>vec;
            for(int j=i+1;j<arr.size();j++){
                if(abs(arr[i]-arr[j])==mindiff){
                    vec.push_back(arr[i]);
                    vec.push_back(arr[j]);
                     if(!vec.empty())res.push_back(vec);
                vec.clear();
                }

            }
        }
        return res;
    }
};