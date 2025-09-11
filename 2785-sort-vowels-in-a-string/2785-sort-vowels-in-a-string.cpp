class Solution {
public:
    string sortVowels(string s) {
        string t=s;
        string temp="", vow="aeiouAEIOU";
        for(char &i : s){
            if(vow.find(i)!=string::npos){
                temp+=i;
            }
        }
        sort(temp.begin(),temp.end());
        int ind=0;
       for(int i=0;i<s.size();i++){
        if(vow.find(s[i])==string::npos)continue;
        else {
            t[i]=temp[ind];
            ind++;
        }
       }
       return t;
    }
};