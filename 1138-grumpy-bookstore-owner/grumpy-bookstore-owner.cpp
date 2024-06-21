class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        
        // Calculate the total number of satisfied customers without any secret technique
        int satisfied = 0;
        for (int i = 0; i < n; ++i) {
            if (grumpy[i] == 0) {
                satisfied += customers[i];
            }
        }
        
        // Calculate the maximum additional satisfied customers we can get by using the secret technique
        int maxAdditionalSatisfied = 0;
        int additionalSatisfied = 0;
        
        // Initial window for the first `minutes` period
        for (int i = 0; i < minutes; ++i) {
            if (grumpy[i] == 1) {
                additionalSatisfied += customers[i];
            }
        }
        maxAdditionalSatisfied = additionalSatisfied;
        
        // Slide the window across the rest of the array
        for (int i = minutes; i < n; ++i) {
            if (grumpy[i] == 1) {
                additionalSatisfied += customers[i];
            }
            if (grumpy[i - minutes] == 1) {
                additionalSatisfied -= customers[i - minutes];
            }
            maxAdditionalSatisfied = max(maxAdditionalSatisfied, additionalSatisfied);
        }
        
        // The result is the sum of already satisfied customers and the best additional satisfied customers
        return satisfied + maxAdditionalSatisfied;
    }
};
