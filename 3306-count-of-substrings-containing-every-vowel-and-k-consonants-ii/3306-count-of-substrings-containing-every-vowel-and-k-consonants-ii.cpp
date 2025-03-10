class Solution {
public:
     long long atleast(string word,int k){
         int cons=0;
         long long res=0;
       int n=word.size();
       map<char,int>mp;
       int left=0;
       for(int right=0;right<n;right++){
        if(word[right]=='a' || word[right]=='e' || word[right]=='i' || word[right]=='o'
        || word[right]=='u')mp[word[right]]++;
        else cons++;
        while(mp.size()==5 && cons>=k){
            res+=n-right;
            if(word[left]=='a' || word[left]=='e' || word[left]=='i' || word[left]=='o'
        || word[left]=='u'){
            mp[word[left]]--;
            if(mp[word[left]]==0)mp.erase(word[left]);
        }
        else cons--;
        left++;
        }
       }
       return res;
     }
    long long countOfSubstrings(string word, int k) {
      return atleast(word,k)-atleast(word,k+1);
    }
};