class Solution {
public:
    char kthCharacter(int k) {
        int len=1;
        string str="a";
        while(k>=len){
            string newstr="";
               char c;
            for(int i=0;i<str.size();i++){
                c=(str[i]-'a'+1)%26+'a';
                newstr+=c;
            }
            str+=newstr;
            len*=2;
        //   c= (str[0]-'a'+1) % 26 + 'a';
            cout<<c<<endl;
        }
        return str[k-1];
    }
};