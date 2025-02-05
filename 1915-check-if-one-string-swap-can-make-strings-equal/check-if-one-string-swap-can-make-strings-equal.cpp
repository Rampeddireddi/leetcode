class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        map<char,int>mp1,mp2;
        int l1=s1.size();

        for(int i=0;i<l1;i++){
            mp1[s1[i]]++;
            mp2[s2[i]]++;
        }
        if(mp1!=mp2)return false;
        int violations=0;
        for(int i=0;i<l1;i++){
            if(s1[i]!=s2[i])violations++;
        }
        if(violations ==0 || violations==2)return true;
        return false;
    }
};