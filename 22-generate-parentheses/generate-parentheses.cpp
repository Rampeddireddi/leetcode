class Solution {
public:
vector<string>v;
void gen(int cl,int op,string s,int n)
{
    if(op+cl==2*n) 
    {
        v.push_back(s);
     return;
    }
    if(cl>op) return;
    if(op==n)
    {
        gen(cl+1,op,s+')',n);
    }
    else{
        gen(cl,op+1,s+'(',n);
        gen(cl+1,op,s+')',n);
    }
   
}
    vector<string> generateParenthesis(int n) {
     gen(0,1,"(",n);
       return v;
    }
};