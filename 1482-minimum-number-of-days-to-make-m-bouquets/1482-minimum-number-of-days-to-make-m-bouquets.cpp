class Solution {
public:
bool feasible(int days,int k,vector<int>bloomDay,int len,int m){
    int cnt=0;
    int boquets=0,flowers=0;
    for(int i=0;i<len;i++){
        if(days< bloomDay[i])flowers=0;
        else{
            flowers++;
            if(flowers == k){
                boquets++;
                flowers=0;
            }
        }
       
    }
     return boquets>=m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        long long req=long(m)*long(k);
        if(req > n)return -1;
        int left=1;
        int right= *max_element(bloomDay.begin(),bloomDay.end());
        while(left < right){
            int mid= left+(right-left)/2;
            if(feasible(mid,k,bloomDay,n,m))right=mid;
            else left=mid+1;
        }
        return left;
    }
};