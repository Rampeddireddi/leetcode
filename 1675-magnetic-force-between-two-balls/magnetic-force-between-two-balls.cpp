class Solution {
public:
    bool distance(vector <int> &v,int mingap,int m){
        int l=v[0];
        int cnt=1;
        for(int i=1;i<v.size();i++){
            if(v[i] - l >= mingap)
            {
                cnt++;
                l=v[i];
            
            }
            }
         if(cnt>=m)return true;
        
        
      return false; 
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int l=0,r=position.back()-position.front();
        while(l<r){
            int mid=r-(r-l)/2;
            if(distance(position,mid,m)) l=mid;
            else r=mid-1;
        }

        return l;
    }
};