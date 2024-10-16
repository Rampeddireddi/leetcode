class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        string res="";
        priority_queue<pair<int,char>>pq;
        if(a>0)pq.push({a,'a'});
        if(b>0)pq.push({b,'b'});
        if(c>0)pq.push({c,'c'});
        while(!pq.empty()){
            auto [count1,char1]=pq.top();
            pq.pop();
            if(res.size()>=2 && res[res.size()-1]==char1 && res[res.size()-2]==char1){
                if(pq.empty())break;
                auto[count2,char2]=pq.top();
                pq.pop();
                res+=char2;
                count2--;
                if(count2>0)pq.push({count2,char2});
                if(count1>0)pq.push({count1,char1});
            }
            else{
                res+=char1;
                count1--;
                if(count1>0)pq.push({count1,char1});
            }
        }
        return res;
    }
};