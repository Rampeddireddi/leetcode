class Solution {
public:
    // bool isvalid(char c){
    //     if(c=='a' || c=='b' || c=='c')return true;
    //     return false;
    // }
    int numberOfSubstrings(string s) {
    vector<int>l(3,-1);
    int res=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        l[s[i]-'a']=i;
        if(l[0]!=-1 && l[1]!=-1 && l[2]!=-1)res+=1+min(min(l[0],l[1]),l[2]);
    }
    return res;
    }
};