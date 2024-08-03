class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        if(target.size()!=arr.size())return false;

        unordered_map<int,int>targetmap;
        for(int i=0;i<target.size();i++){
            targetmap[target[i]]++;
        }
        for(int i=0;i<arr.size();i++){
            if(targetmap.find(arr[i])!=targetmap.end() && targetmap[arr[i]]!=0){
                targetmap[arr[i]]--;
            }
            else return false;
            
        }
        return true;
    }
};