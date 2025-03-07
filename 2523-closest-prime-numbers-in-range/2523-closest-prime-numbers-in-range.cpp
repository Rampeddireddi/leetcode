class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        int n=sqrt(right);
        if(left<2)left=2;
        vector<bool>vec(n+1,true);
        vec[0]=vec[1]=false;
        for(int i=2;i<=n;i++){
            if(vec[i]){
                for(int j=i+i;j<=n;j+=i){
                    vec[j]=false;
                }
            }
        }
        vector<int>primes;
        for(int i=0;i<=n;i++){
            if(vec[i])primes.push_back(i);
        }
        int m=primes.size();
        vector<int>res(right-left+1,true);
        for(int i=0;i<m;i++){
            int curr=primes[i];
            int l=0;
            if(left%curr==0)l=left/curr;
            else l=left/curr+1;
            for(int k=max(l*curr, curr*curr); k<=right;k+=curr){
                res[k-left]=false;
            }
        }
        vector<int>final;
        for(int i=0;i<(right-left+1);i++){
            if(res[i]==true){
                final.push_back(i+left);
               
            }
        }
        int len=final.size();
        int result=INT_MAX;
        vector<int>finalvec={-1,-1};
        for(int i=1;i<len;i++){
            if(final[i]-final[i-1]<result){
                result=final[i]-final[i-1];
                finalvec={final[i-1],final[i]};
                }
        }
        return finalvec;
    }
};