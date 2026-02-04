class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
      int val=target-'a';
      vector<int>res;
      for(char i : letters)res.push_back(i-'a');
      auto it=upper_bound(res.begin(),res.end(),val);
      int index=it-res.begin();
      if(index>=res.size())return letters[0];
      return letters[index];  
    }
};