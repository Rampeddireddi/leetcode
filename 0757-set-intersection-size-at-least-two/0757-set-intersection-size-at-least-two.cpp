class Solution {
public:
 static bool comp(vector<int> &a,vector<int> &b){
     if(a[1]==b[1])return a[0]>b[0];
     return a[1]<b[1];
   }
    int intersectionSizeTwo(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        vector<int>res;
        res.push_back(intervals[0][1]-1);
        res.push_back(intervals[0][1]);
        for(int i=1;i<intervals.size();i++){
            if( res[res.size()-1] < intervals[i][0] ){
                res.push_back(intervals[i][1]-1);
                res.push_back(intervals[i][1]);
            }
            else if( res[res.size()-1] >= intervals[i][0] && res[res.size()-2]<intervals[i][0])
            res.push_back(intervals[i][1]);
        }
        return res.size();
    }
};