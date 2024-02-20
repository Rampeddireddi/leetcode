class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        string ns="";
        int st=0,end=s.size()-1;
        while(st<end && s[st]==' ')st++;
        while(st<end && s[end]==' ')end--;
        for(int i=st;i<=end;i++){
            if(s[i]!=' '){
            ns+=s[i];    
            }
            else{
            if(ns!="")
            v.push_back(ns);
                ns="";
            }
        }
        v.push_back(ns);
        string ns1="";
        reverse(v.begin(),v.end());
        
        for(int i=0;i<v.size();i++){
            ns1+=v[i];
            ns1+=" ";
        }
        ns1.pop_back();
        return ns1;
        
    }
};