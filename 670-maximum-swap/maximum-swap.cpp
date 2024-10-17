class Solution {
public:
    int maximumSwap(int num) {
    string s= to_string(num);
   vector<int>mp(10,-1);
   for(int i=0;i<s.size();i++){
    mp[s[i]-'0']=i;
   }
    for(int i=0;i<s.size();i++){
        for(int d=9;d>s[i]-'0';d--){
            if(mp[d]>i){
                swap(s[i],s[mp[d]]);
               return stoi(s);
            }
        }
    }
    
    return num;
    }
};