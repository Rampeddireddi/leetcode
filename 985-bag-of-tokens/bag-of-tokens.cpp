class Solution {
public:
   
    int bagOfTokensScore(vector<int>& tokens, int power) {
     int s=0,c=0;

        sort(tokens.begin(),tokens.end());
    int i=0,j=tokens.size()-1;
    while(i<=j){
        if(power>=tokens[i]){
            power-=tokens[i];
            i++;
            s+=1;
            c=max(s,c);
        }
        else if(s>=1){
            power+=tokens[j];
            j--;
            s-=1;
        }
        else break;
    }
    return c; 
    }
};
