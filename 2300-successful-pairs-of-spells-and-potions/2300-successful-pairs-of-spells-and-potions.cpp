class Solution {
public:
bool issuccess(int spell,int potion, long long success){
  long long res=0;
  res=(long long)spell * potion;
  return res>=success;
}
 int findpairs(int spell, vector<int>& potions, long long success){
    int l=0,r=potions.size()-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(issuccess(spell,potions[mid],success)){
            r=mid-1;
        }
        else l=mid+1;
    }
    return potions.size()-l;
 }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>res;
       sort(potions.begin(),potions.end());
       for(int i=0;i<spells.size();i++){
        int val=findpairs(spells[i],potions,success);
        res.push_back(val);
       } 
       return res;
    }
};