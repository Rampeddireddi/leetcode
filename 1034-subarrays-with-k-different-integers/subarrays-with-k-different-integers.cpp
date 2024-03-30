#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> count1, count2;
        int left1 = 0, left2 = 0, distinct1 = 0, distinct2 = 0, result = 0;
        
        for (int right = 0; right < n; ++right) {
            if (count1[nums[right]] == 0) ++distinct1;
            if (count2[nums[right]] == 0) ++distinct2;
            ++count1[nums[right]];
            ++count2[nums[right]];
            
            while (distinct1 > k) {
                --count1[nums[left1]];
                if (count1[nums[left1]] == 0) --distinct1;
                ++left1;
            }
            
            while (distinct2 >= k) {
                --count2[nums[left2]];
                if (count2[nums[left2]] == 0) --distinct2;
                ++left2;
            }
            
            result += left2 - left1;
        }
        
        return result;
    }
};
