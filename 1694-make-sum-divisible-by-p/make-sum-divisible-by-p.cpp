class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int totalSum = 0;
        for (int num : nums) {
            totalSum = (totalSum + num) % p;
        }

        if (totalSum == 0) return 0;  // No need to remove any subarray, already divisible

        int rem = totalSum;
        unordered_map<int, int> prefixRemainder;  // To store prefix sums and their indices
        prefixRemainder[0] = -1;  // To handle the case where the subarray starts at index 0

        int prefixSum = 0, minLength = nums.size();

        for (int i = 0; i < nums.size(); ++i) {
            prefixSum = (prefixSum + nums[i]) % p;
            int targetRemainder = (prefixSum - rem + p) % p;

            // Check if we have seen a prefix that, if removed, will make the sum divisible by p
            if (prefixRemainder.find(targetRemainder) != prefixRemainder.end()) {
                minLength = min(minLength, i - prefixRemainder[targetRemainder]);
            }

            // Store the current prefix remainder and its index
            prefixRemainder[prefixSum] = i;
        }

        // If no valid subarray was found, return -1
        return minLength == nums.size() ? -1 : minLength;
    }
};
