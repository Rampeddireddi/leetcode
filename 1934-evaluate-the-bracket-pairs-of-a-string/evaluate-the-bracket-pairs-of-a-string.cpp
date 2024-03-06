class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string res="";
        int i=0;
        unordered_map<string,string>mp;
        for(auto i:knowledge)mp[i[0]]=i[1];
        while(i<s.size()){
        string sr="";
         if(s[i]=='('){
             i++;
             while(s[i]!=')')
             {
                 sr+=s[i];
                 i++;
             }
             
             if(mp.find(sr)!=mp.end())
             {
                 res+=mp[sr];
             }
             else res+='?';
         }
         else{
             res+=s[i];
            
         }
         i++;
        }
        return res;
    }
};