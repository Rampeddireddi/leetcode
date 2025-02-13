class Solution {
public:
  int minOperations(vector<int>& nums, int k) {
    // Priority queue to keep track of the smallest elements
    priority_queue<long, vector<long>, greater<long>> pq(nums.begin(), nums.end());
    
    int cnt = 0;
    
    while (pq.top() < k) {
        long first = pq.top();  // First smallest element
        pq.pop();
        
        long second = pq.top();  // Second smallest element
        pq.pop();
        
        // Perform the operation: (first * 2) + second
        long data = first * 2 + second;
        
        // Push the result back into the priority queue
        pq.push(data);
        
        cnt++;  // Increment the operation count
    }

    return cnt;
}
};