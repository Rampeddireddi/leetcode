class Solution {
public:
    int trap(vector<int>& height) {
         int len = height.size();
        if (len <= 2) {
            return 0; 
        }
        vector<int>left(len,0);
        vector<int>right(len,0);
       
        int max_left=0;
        int max_right=0;
        int ans=0;
        
        for(int i=0;i<len;i++)
        {
            //  if(max_left<height[j])
            //     {
            //         max_left=height[j];
            //     } time limit exceeded 
             max_left = max(max_left, height[i]);
            left[i] = max_left;
        }
        for(int i=len-1;i>=0;i--)
        {
             max_right = max(max_right, height[i]);
            right[i] = max_right;
        }
        for(int i=0;i<len;i++)
        {
            int x=min(left[i],right[i]);
            ans+=(x-height[i]);
        }
        return ans;
    }
};