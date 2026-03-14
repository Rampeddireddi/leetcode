class Solution {
public:
vector<string>res;
void gen_words(int n,string &word,vector<char>&vec){
  if(word.size()==n){
    // cout << word << endl;
    res.push_back(word);
    return;
}
    for(char i: vec){
        if(word.empty() || word.back()!=i){
            word.push_back(i);
        gen_words(n,word,vec);
        word.pop_back();
        }
    }
}
    string getHappyString(int n, int k) {
        vector<char>vec={'a','b','c'};
        string word="";
        // res.clear();
        gen_words(n,word,vec);
        // for(auto i:res)cout<<i<<" ";
        return (k>res.size())?"":res[k-1];
    }
};