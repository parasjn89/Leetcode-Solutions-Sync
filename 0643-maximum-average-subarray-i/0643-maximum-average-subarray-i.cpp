class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;

        // Step 1: First window ka sum
        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }

        int maxSum = sum;

        // Step 2: Window ko slide karo
        for(int i = k; i < n; i++) {
            sum = sum - nums[i - k] + nums[i];

            maxSum = max(maxSum, sum);
        }

        // Step 3: Maximum sum ko average mein convert karo
        return (double)maxSum / k;
    }
};