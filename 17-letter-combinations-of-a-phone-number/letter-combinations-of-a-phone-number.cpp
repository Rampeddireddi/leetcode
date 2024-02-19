class Solution {
public:
    vector<string>res;
    void Ram(string temp,int s,string digits,map<int,string>mp,int i){
        if(s>=digits.size()){
            res.push_back(temp);
            return;
        }
        int v=digits[i]-'0';
        string val=mp[v];
        for(int k=0;k<val.size();k++){
            temp.push_back(val[k]);
            Ram(temp,s+1,digits,mp,i+1);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        // int s=digits.size();
        if(digits=="")return res;
        map<int,string>mp={{2,"abc"},{3,"def"},{4,"ghi"},{5,"jkl"},
        {6,"mno"},{7,"pqrs"},{8,"tuv"},{9,"wxyz"}};
        // <string>mp={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        // Ram(temp,s,);
        Ram("",0,digits,mp,0);
        return res;
    }
};