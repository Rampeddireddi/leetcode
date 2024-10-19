class Solution {
public:
    string reverseinvert(string str){
        string news="";
        for(int i=0;i<str.size();i++){
            if(str[i]=='1')news+='0';
            else news+='1';
        }
        reverse(news.begin(),news.end());
        return news;
    }
    char findKthBit(int n, int k) {
        vector<string>s;
        s.push_back("0");
        for(long  i=1;i<n;i++){
            string subr=s[i-1]+"1"+reverseinvert(s[i-1]);
            s.push_back(subr);
        }
    string res=s[n-1];
    char ans=res[k-1];
    return ans;
    }
};