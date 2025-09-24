
class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
            long long num=llabs(numerator);
            long long deno=llabs(denominator);
            if(num==0)return "0";
            string res="";
            if(denominator<0 ^ numerator<0){
                res+='-';
            }
            res+=to_string(num/deno);
            if(num%deno == 0)return res;
           res += '.';
           long long rem=num%deno;
        unordered_map<long long, int> mp;
        while (rem) {
            if (mp.count(rem)) {
                res.insert(mp[rem], "(");
                res += ')';
                break;
            }
            mp[rem] = res.size();
            rem *= 10;
            res += to_string(rem / deno);
            rem %= deno;
        }
        return res;
    }
};