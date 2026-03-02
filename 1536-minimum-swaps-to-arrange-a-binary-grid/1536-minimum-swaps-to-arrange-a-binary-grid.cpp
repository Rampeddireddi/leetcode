class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>vec;
        for(int i=0;i<n;i++){
            int j=n-1;
            while(j>=0 && grid[i][j]!=1){
                j--;
            }
            vec.push_back(j);
        }
        int swaps=0;
        for(int i=0;i<n;i++){
            if(vec[i]>i){
                int j=i;
                while(j<n && vec[j]>i){
                    j++;
                }
                if(j==n)return -1;
                swaps+=j-i;
                int temp=vec[j];
                for(int k=j;k>i;k--){
                    vec[k]=vec[k-1];
                }
                vec[i]=temp;

            }
        }
        return swaps;
    }
};