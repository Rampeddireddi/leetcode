class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int k=0;
        int m=matrix[0].size()-1;
        for(int i=0;i<matrix.size();i++){
            if(target <= matrix[i][m]){
                k=i;
                break;
            }
        }
        for(int i=0;i<matrix[k].size();i++){
            if(target==matrix[k][i])return true;
        }
        return false;
    }
};