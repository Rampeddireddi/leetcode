class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if(target.size()!=arr.size())return false;
        map<int,int>targetmap;
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