class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int i=0,j=0,c=0;
        string s=to_string(num);
        while(j<s.size())
        {
            string s2=s.substr(i,j+1);
            int t=stoi(s2);
            if(t!=0 && num%t==0)
            {
                c+=1;
            }
            i++;
            j++;
        }
        return c;
    }
};