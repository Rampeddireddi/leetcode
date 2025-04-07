class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int totalSum = 0;
        for (int num : nums) totalSum += num;

        if (totalSum % 2 != 0) return false;

        int targetSum = totalSum / 2;
        int n = nums.size();

        // dp[i][j]: Can we make sum j using the first i numbers?
        vector<vector<bool>> dp(n + 1, vector<bool>(targetSum + 1, false));

        // Base case: We can always make sum 0 (empty subset)
        for (int i = 0; i <= n; ++i) {
            dp[i][0] = true;
        }

        // Fill the DP table
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= targetSum; ++j) {
                if (j >= nums[i - 1]) {
                    // Include or exclude the current number
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i - 1]];
                } else {
                    // Can't include current number, just carry forward
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        return dp[n][targetSum];
    }
};
