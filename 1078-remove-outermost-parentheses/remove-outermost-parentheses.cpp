class Solution {
public:
    string removeOuterParentheses(string s) {
      string res="";
      int bal=0;
      int n=s.size();
      for(int i=0;i<n;i++){
        if(s[i]=='('){
            if(bal > 0){
                res+=s[i];
            }
            bal++;
        }
        else if(s[i]==')'){
            bal--;
            if(bal>0)res+=s[i];
        }
    
      }
      return res;  
    }
};