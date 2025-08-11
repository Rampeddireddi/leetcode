class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
  int mod = 1e9+7;
      vector<int>power;
      //power vector generation
    int base=0;
      while(n){
        if(n&1){
            power.push_back(1<<base);
        }
        base++;
        n=n>>1;
      }
//   for(auto i:power)cout<<i<<" ";

      vector<long long>prefix(power.size(),0);
      long long pre=1;
      for(int i=0;i<power.size();i++){

        pre=(pre*power[i]);

        prefix[i]=pre;
      }
      for(auto i:prefix)cout<<i<<" ";
      vector<int>res;
      int i1,i2;
      for(int i=0;i<queries.size();i++){
        i1=queries[i][0];
        i2=queries[i][1];
        if(i1-1 >=0){
            res.push_back((prefix[i2]/prefix[i1-1])%mod);
        }
        else res.push_back((prefix[i2])%mod);
      }
      return res;

    }
};