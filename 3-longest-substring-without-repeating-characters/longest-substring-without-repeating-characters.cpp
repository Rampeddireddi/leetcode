class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i,j,ma=0,l=s.size();
        for(i=0;i<l;i++){
            map<char,int>mpp;
            for(j=i;j<l;j++){
                mpp[s[j]]++;
                if(mpp[s[j]]>1){
                    if(mpp.size()>ma)ma=mpp.size();
                    break;
                }
            }
            if(mpp.size()>ma)ma=mpp.size();
            if(ma==l)break;
        }
        return ma;
    }
};