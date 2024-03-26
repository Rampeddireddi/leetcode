class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // int x=*min_element(nums.begin(),nums.end());
        // int m1=*max_element(nums.begin(),nums.end());
        // if(m1<1)return 1;
        // if(x>1)return 1;
        // for(int i=1;i<=m1;i++){

        //  if(i!=0 && find(nums.begin(),nums.end(),i)==nums.end()){
        //         return i;
        //     }
        // }
        // return m1+1;
          if(find(nums.begin(),nums.end(),1)==nums.end())return 1;
        unordered_set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        // sort(nums.begin(),nums.end());
        
        int x=*min_element(nums.begin(),nums.end());
        if(x>1)return 1;
        int m1=*max_element(nums.begin(),nums.end());
        if(m1<1)return 1;
      
        for(int i=1;i<m1;i++)
        {
           if(s.find(i)==s.end())return i;
        }
       return m1+1;
    }
};