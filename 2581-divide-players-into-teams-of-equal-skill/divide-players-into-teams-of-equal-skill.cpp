class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int i=0, j=skill.size()-1;
         long initialSum=skill[i]+skill[j];
        long prod = 0
        ;
        while(i<j){
            if(skill[i]+skill[j]!=initialSum)return -1;
            prod+=skill[i]*skill[j];
            i++;
            j--;
        }

        return  prod;
    }
};