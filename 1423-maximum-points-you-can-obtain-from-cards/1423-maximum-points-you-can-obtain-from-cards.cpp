class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        int leftSum = 0;

        // Pehle left se k cards ka sum
        for(int i = 0; i < k; i++) {
            leftSum += cardPoints[i];
        }

        int maxSum = leftSum;
        int rightSum = 0;

        // Dheere-dheere cards ko left se right ki taraf shift karo
        for(int i = 0; i < k; i++) {
            leftSum -= cardPoints[k - 1 - i];
            rightSum += cardPoints[n - 1 - i];

            maxSum = max(maxSum, leftSum + rightSum);
        }

        return maxSum;
    }
};