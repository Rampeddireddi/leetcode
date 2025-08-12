int MOD = 1e9 + 7;
typedef long long ll;
class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<ll> powers;
        int base=0;
       while(n){
        if(n&1)powers.push_back(1<<base);
        base++;
        n>>=1;
       }
        vector<int> ans;
        for(auto &it:queries) {
            ll temp=1;
            for(int i=it[0];i<=it[1];i++) {
                temp*=powers[i];
                temp%=MOD;
            }
            ans.push_back(temp);
        }
        return ans;
    }
};