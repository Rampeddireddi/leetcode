class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>v;
        if(bank.size()==1)return 0;
        for(int i=0;i<bank.size();i++){
            int c=0;
            int k=0;
            for(int j=0;j<bank[i].size();j++){
              if(bank[i][j]=='1'){
                  k=1;
                  c+=1;
              }  
            }
            if(k==1)
            v.push_back(c);
        }
        if(v.size()<=1)return 0;
        int i=0;
        int finalres=0;

       while(i<v.size()-1){
           int res=v[i]*v[i+1];
           finalres+=res;
           i=i+1;
       }
       return finalres;
    }
};