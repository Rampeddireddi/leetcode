class Solution {
public:
    vector<vector<char>> Transpose(vector<vector<char>>&box){
        int n=box.size();
        int m=box[0].size();
        vector<vector<char>> v(m,vector<char>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v[i][j]=box[j][i];
            }
        }
        for(int i=0;i<m;i++){
            reverse(v[i].begin(),v[i].end());
        }
        return v;
    }
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
    for(int k=0;k<box.size();k++)
    {
    vector<char>&c=box[k];
    int i=c.size()-1;
    int j=c.size()-2;
    while(j>=0){
        if(c[j]=='*'){
            j--;
            i=j+1;
        }
        else if(c[j]=='.' && c[i]=='.'){
            j--;
        }
        else if(c[j]=='#' && c[i]=='.'){
            swap(c[j],c[i]);
            i--;
            j--;
        }
        else if(c[j]=='#' && c[i]=='*'){
            j--;
            i--;
        }
        else if(c[j]=='.' && c[i]=='*' || c[j]=='*' && c[i] == '.'){
            j--;
            i--;
        }
        else {
            i--;
            j--;
        }
    }
    }
    // for(auto& i:box){
    //     for(auto& j:i){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<vector<char>>vec=Transpose(box);
    return vec;
    }
};