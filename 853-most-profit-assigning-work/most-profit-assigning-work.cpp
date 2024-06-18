class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
       unordered_map<int,int>mp;
       int n=profit.size(),j=0,best=0,res=0;
    
       for(int i=0;i<profit.size();i++){
           if(mp.find(difficulty[i])!=mp.end()){
            mp[difficulty[i]]=max(mp[difficulty[i]],profit[i]);
        
           }
           else mp[difficulty[i]]=profit[i];  // This might overwrite profits for the same difficulty
       } 
       sort(difficulty.begin(), difficulty.end());  // Sorting difficulty array after populating the map
       sort(worker.begin(), worker.end());
       for(int i=0;i<worker.size();i++){
           while(j<n && worker[i]>=difficulty[j] ){  // Incorrect indexing with sorted difficulty array
               best=max(best,mp[difficulty[j]]);
               j++;
           }
           res+=best;
       }
       return res;
    }
};
