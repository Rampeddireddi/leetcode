class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int specialone=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                bool bit=false;
                if(mat[i][j]==1){
                    for(int k=0;k<i;k++){
                        if(mat[k][j]==1)bit=true;
                    }
                    for(int k=i+1;k<n;k++){
                        if(mat[k][j]==1)bit=true;;
                    }
                    for(int k=0;k<j;k++){
                        if(mat[i][k]==1)bit=true;
                    }
                    for(int k=j+1;k<m;k++){
                        if(mat[i][k]==1)bit=true;
                    }
                   if(!bit)specialone++; 
                }
            }
        }
        return specialone;
    }
};