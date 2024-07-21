class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& m) {
        int m1=m.size(),n=m[0].size();
        int top=0,bottom=m1-1;
        int left=0,right=n-1;
        vector<int> res;
        while(left<=right && top <=bottom){
            
            for(int i=left;i<=right;i++){
                res.push_back(m[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                res.push_back(m[i][right]);
            }
            right--;
           if (top <= bottom){
            for(int i=right;i>=left;i--){
                res.push_back(m[bottom][i]);
            }
            }
            bottom--;
              if (left <= right){
            for(int i=bottom;i>=top;i--){
                res.push_back(m[i][left]);
            }
            }
            left++;

        }
        return res;
        
    }
};