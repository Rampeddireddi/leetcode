class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
    // for a index j there are 0 to j-1 possible elements that can possibly pair with j , 
    // so the total possible pairs of size 2 will be 0+1+2+3....n-1 of size n
    int n=nums.size();
    // int Posspairs=(n*(n-1))/2;
    long badpairs=0;
    map<int,int>mp;
    for(int i=0;i<n;i++){
     int diff= i-nums[i];
     int prevpairs=mp[diff];
     badpairs += i-prevpairs;
     mp[diff]++;
    }
    return badpairs;

    }
};