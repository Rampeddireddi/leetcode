class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
    vector<pair<int,int>> jobs;
    int n=profit.size(),it=0,res=0,fr=0;
    for(int i=0;i<n;i++){
        jobs.push_back({difficulty[i],profit[i]});
    }
    sort(jobs.begin(),jobs.end());
    sort(worker.begin(),worker.end());
    for(int & ability : worker){
        while(it<n && ability>=jobs[it].first){
            res=max(res,jobs[it].second);
            it++;
        }
    fr+=res;
    }
    return fr;
    }
};