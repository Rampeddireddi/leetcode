class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int res=0,left=0;
        int n=fruits.size();
        map<int,int>mp;
        int sub=0;
        for(int right=0;right<n;right++){
            mp[fruits[right]]++;
            sub+=1;
            while(mp.size()>2){
                sub-=1;
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0)mp.erase(fruits[left]);
                left++;
            }
            res=max(res,sub);
        }
        return res;
    }
};