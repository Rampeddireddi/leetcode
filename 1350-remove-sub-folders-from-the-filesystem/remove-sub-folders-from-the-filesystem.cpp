class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        vector<string>res;
        sort(folder.begin(),folder.end());
        if(folder.size()>=1)res.push_back(folder[0]);
        for(int i=1;i<folder.size();i++){
            int j=0;
            string a=res.back()+'/';
            string b=folder[i];
            // while(j<folder[i-1].size()&&j<folder[i].size()){
            //     if(folder[i-1][j])
          if(b.substr(0,a.size())!=a)res.push_back(b);
            }
            return res;
        }
    
};