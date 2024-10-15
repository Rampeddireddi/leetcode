class Solution {
public:
    long long minimumSteps(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        long long minswaps=0;
        long long black=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                minswaps+=black;
            }
            else 
            black++;
        }
        return minswaps;
    }
};