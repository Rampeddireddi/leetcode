class Solution {
public:
    int minimumLength(string s) {
       int i=0;
       char s1,s2;
       int j=s.size()-1;
       while(i<j){
           if(s[i]==s[j]){
               s1=s[i];
               s2=s[j];
               while(i<j and s1==s[i])
               {
                   i++;
               }
               while(i<j and s2==s[j]){
                   j--;
               }
           }
           else
           {
               return j-i+1;
           }
       }
       if(i==j && s1==s[i]) return 0; 
       else if(i>j) return 0;
       else return 1;
    } 
};
