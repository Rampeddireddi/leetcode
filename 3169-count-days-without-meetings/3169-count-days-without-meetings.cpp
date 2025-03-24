class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        // sort(meetings.begin(),meetings.end());
        vector<int>vec(days+1,0);
        int n=meetings.size();
        vec[0]=1;
        for(int i=0;i<n;i++){
            for(int s=meetings[i][0];s<=meetings[i][1];s++){
                vec[s]=1;
            }
        }
        int cnt=0;
        for(int i=1;i<=days;i++){
            if(vec[i]==0)cnt++;
        }
        return cnt;
    }
};