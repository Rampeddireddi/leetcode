class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i=0;
        while(i<bits.size()){
            if(bits[i]==1)i+=2;
            else if(i==bits.size()-1 && bits[i]==0)return true;
            else i++;
        }
       return false; 
    }
};