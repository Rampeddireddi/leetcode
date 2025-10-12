class Solution {
public:
    bool scoreBalance(string s) {
        vector<int>scores;
        int sum=0,checksum=0;
        for(const char i:s)
        {
        scores.push_back(i-'a'+1);
        sum+=scores.back();
        }
        if(sum%2!=0)return false;
        for(const int i:scores){
            sum-=i;
            checksum+=i;
            if(sum==checksum)return true;
        }
        return false;
    }
};