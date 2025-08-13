class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.rbegin(),s.rend());
        sort(g.rbegin(),g.rend());
        int i=0,n=s.size();
        int j=0;
        int res=0;
        while(i<n && j<g.size()){
            if(g[j]<=s[i]){
                res++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return res;
    }
};