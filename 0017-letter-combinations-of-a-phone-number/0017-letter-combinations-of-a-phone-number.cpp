class Solution {
public:
    void chuskopapa(int ind,int len, string &digits, string subres,vector<string>&vec, vector<string>&res){
        if(ind>=len){
            res.push_back(subres);
            return;
        }
        string str=vec[digits[ind]-'0'];
        for(int i=0;i<str.size();i++){
            subres.push_back(str[i]);
            chuskopapa(ind+1,len,digits,subres,vec,res);
            subres.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits=="")return {};
        vector<string>vec={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>res;
        chuskopapa(0,digits.size(),digits,"",vec,res);
        return res;
    }
};