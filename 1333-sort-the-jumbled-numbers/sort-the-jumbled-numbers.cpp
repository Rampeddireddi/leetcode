class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        map<int, vector<int> > jumbledmap;
        vector<int> res;
        vector<int> finalres;
        
        for (int i = 0; i < nums.size(); i++) { 
            int num = nums[i];
            int resval = 0;
            int powerval = 0;
            int prevval = 0;
            
            if (num == 0) {
                resval = mapping[0];
            } else {
                while (num > 0) {
                    int rem = num % 10;
                    resval = pow(10, powerval) * mapping[rem] + prevval;
                    prevval = resval;
                    powerval += 1;
                    num = num / 10;
                }
            }
            jumbledmap[resval].push_back(nums[i]);
        }
        for(auto i : jumbledmap){
            sort(i.second.begin(),i.second.end());
        }
        for (auto i : jumbledmap) {
            res.push_back(i.first);
        }
        
        sort(res.begin(), res.end());
        
        for (int i = 0; i < res.size(); i++) {
            for(int k=0;k<jumbledmap[res[i]].size();k++){
                finalres.push_back(jumbledmap[res[i]][k]);
            }
        }
        
        return finalres;
    }
};
