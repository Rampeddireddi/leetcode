class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int delcnt=0;
        for(int i=0;i<strs[0].size();i++){
            for(int j=0;j<strs.size()-1;j++){
                if(strs[j][i]-'a' > strs[j+1][i]-'a'){
                    delcnt++;
                    cout<<strs[j][i]<<" "<<strs[j+1][i]<<endl;
                    break;
                }
            }
        }
        return delcnt;
    }
};