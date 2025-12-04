class Solution {
public:
    int countCollisions(string directions) {
        int l=0,r=directions.size()-1;
       long int cnt=0;
        while(l<directions.size() && directions[l]=='L')l++;
        while(r>=0 && directions[r]=='R' )r--;
        for(int i=l;i<=r;i++){
            if(directions[i]!='S')cnt++;
        }
        return cnt;
    }
};