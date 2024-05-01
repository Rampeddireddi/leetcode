class Solution {
public:
    string reversePrefix(string word, char ch) {
        int ind,torf=0;
        string s="",res="";
        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                ind=i;
                s+=word[i];
                torf=1;
                break;
            }
            else
            s+=word[i];
        }
      if(torf){
        reverse(s.begin(),s.end());
        
        res=s+word.substr(ind+1);
        return res;
      }
      else
      return word;
    }
};