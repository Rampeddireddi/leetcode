class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>vec;
        int n=grid.size();
        for(int i=0;i<n;i++){
            vec.insert(vec.end(),grid[i].begin(),grid[i].end());
        }
        int steps=0,ms=0;
        sort(vec.begin(),vec.end());
        int siz=vec.size();
        int mid=siz/2;
        for(int i=0;i<siz;i++){
            ms=0;
            if(vec[i]<vec[mid]){
                ms=(vec[mid]-vec[i])/x;
                if(ms*x == vec[mid]-vec[i]){
                    steps+=ms;
                }
                else return -1;
            }
            else if(vec[mid]<vec[i]){
                ms=(vec[i]-vec[mid])/x;
                if(ms*x == vec[i]-vec[mid]){
                    steps+=ms;
                }
                else return -1;
            }
        }
        return steps;
    }
};