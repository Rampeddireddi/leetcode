class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last=digits[digits.size()-1];
        last+=1;
        int carry=last/10;
        int rem=last%10;
        digits[digits.size()-1]=rem;
        int it=digits.size()-2;
        while(carry>0 && it>=0){
            last=digits[it]+carry;
            carry=last/10;
            rem=last%10;
            digits[it]=rem;
            it--;
        }
        if(carry){
            digits.insert(digits.begin(),carry);

        }
        return digits;
    }
};