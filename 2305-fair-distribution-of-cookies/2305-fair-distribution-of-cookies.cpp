class Solution {
public:
//note: i got tle, just because i pass the cookies by value which makes the function to copy the values for every call which is costly if the recursion depth is high (like 8–10+)., so pass by reference is faster and memory efficient
    void solution(int start, int end, int child,int &finalAns, vector<int>&cookiesbyChild,vector<int>&cookies){
        if(start==end){
            int ans=INT_MIN;
            for(int i=0;i<child;i++){
                ans=max(cookiesbyChild[i],ans);
                // cout<<cookiesbyChild[i];
            }
            finalAns=min(finalAns,ans);
            // cout<<ans<<endl;
            return;
        }
        for(int i=0;i<child;i++){
            cookiesbyChild[i]+=cookies[start];
            // cout<<"debug "<<cookiesbyChild[i]<<endl;
            solution(start+1,end,child,finalAns,cookiesbyChild,cookies);
            cookiesbyChild[i]-=cookies[start];
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
        //tried of bitmask but didnt get the approach
        //done with backtracking
        int finalAns=INT_MAX;
        int n=cookies.size();
        vector<int>cookiesbyChild(k,0);
        solution(0,n,k,finalAns,cookiesbyChild,cookies);
        
        return finalAns;
    }
};