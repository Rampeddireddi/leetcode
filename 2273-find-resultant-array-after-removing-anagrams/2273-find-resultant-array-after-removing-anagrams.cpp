class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
     vector<string>res;
     for(int i=0;i<words.size();i++){
        if(res.empty())res.push_back(words[i]);
        else{
            string s1=res.back();
            string s2=words[i];
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            if(s1==s2)continue;
            else res.push_back(words[i]);
        }
     }
     return res;
    }
};