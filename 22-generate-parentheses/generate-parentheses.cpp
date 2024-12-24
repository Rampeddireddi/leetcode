class Solution {
public:
vector<string>res;
  void ram(int n, int leftparan, int rightparan, string s){
     if(leftparan>n)return;
     if(leftparan<rightparan)return;
    if(2*n ==leftparan+rightparan){
            res.push_back(s);
        return;
    }
  
   
    // if(leftparan==n){
    // ram(n,leftparan,rightparan+1,s+')');    
    // }
//  else{
    ram(n,leftparan+1,rightparan,s+'(');
    ram(n,leftparan,rightparan+1,s+')');
//  }


  }
    vector<string> generateParenthesis(int n) {
        ram(n,1,0,"(");
        return res;
    }
};