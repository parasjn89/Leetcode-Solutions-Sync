
class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> mp;

        int sum = 0;
        int count = 0;

        mp[0] = 1;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            int remaining = sum - goal;

            if (mp.find(remaining) != mp.end()) {
                count += mp[remaining];
            }

            mp[sum]++;
        }

        return count;
    }
};