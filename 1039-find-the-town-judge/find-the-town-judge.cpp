class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        set<int>s1;
        // set<int>s2;
      for(int i=0;i<trust.size();i++){
          for(int j=0;j<trust[i].size();j++){
              if(j==0)s1.insert(trust[i][j]);
            //   else s2.insert(trust[i][j]);
          }
      }
      int t=n*(n+1)/2;
      int sum=0;
      int s3=0;
      for(auto i: s1)sum+=i;
    //   for(auto i:s2)s3+=i;
      int c=0;
      int val=t-sum;
      if(sum==t)return -1;

      else{
        for(int i=0;i<trust.size();i++){
        
              if(trust[i][1]==val)
              c++;
          
      }   
      } 
      if(c==n-1)return val;
      return -1;
    }
};