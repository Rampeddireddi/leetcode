class Solution {
public:
   int fact(int n){
    if(n==1)return 1;
    return n*fact(n-1);
   }
    int countPermutations(vector<int>& comp) {
        for(int i=1;i<comp.size();i++){
            if(comp[0]>=comp[i])return 0;
        }
        return fact(comp.size()-1);
    }
};