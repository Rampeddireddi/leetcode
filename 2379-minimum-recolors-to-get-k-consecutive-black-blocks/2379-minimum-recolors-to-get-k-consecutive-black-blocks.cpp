class Solution {
public:
    int minimumRecolors(string blocks, int k) {
       int  bc=0;
       int ans=INT_MAX;
       int n=blocks.size();
       for(int i=0;i<n;i++){
        if(i-k>=0 && blocks[i-k]=='B')bc--;
        if(blocks[i]=='B')bc++;
        ans=min(ans,k-bc);
       }
       return (ans>=0)?ans:-1;
    }
};