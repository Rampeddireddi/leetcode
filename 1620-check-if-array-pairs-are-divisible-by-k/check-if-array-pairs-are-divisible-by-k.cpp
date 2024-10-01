class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
      map<int,int>mp; //frequency map
      for(int i=0;i<arr.size();i++){
        int rem=arr[i] % k;
        if(rem < 0){
            rem+=k;
        }
        mp[rem]++;
      }
      if(mp[0] % 2 !=0)return false;
      for(int i=1;i<=k/2;i++){
        if(mp[i] != mp[k-i])return false;
      }
      return true;
    }
};