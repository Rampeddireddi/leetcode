class Solution {
public:
    string clearStars(string s) {
        priority_queue<pair<char,int>,vector<pair<char,int>>,greater<pair<char,int>>>pq;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            if(s[i]!='*'){
                pq.push({s[i],-i});
            }
            else {
                if(!pq.empty()){
                    int ind=pq.top().second;
                    mp[-ind]=-ind;
                    pq.pop();

                }
            }
        }
        string res="";
        for(int i=0;i<s.size();i++){
            if(mp.find(i)==mp.end() && s[i] != '*')res+=s[i];
        }
        return res;
    }
};