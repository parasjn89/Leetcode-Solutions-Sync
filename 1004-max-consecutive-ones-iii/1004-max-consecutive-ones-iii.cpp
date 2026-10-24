class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;
        int zeros = 0;
        int maxL= 0;
        int n= nums.size();

        for(int r=0;r<n;r++){
            if(nums[r] ==0){
                zeros++;
            }
            while(zeros > k){
                if(nums[l] ==0){
                    zeros--;
                }
                l++;
            }
            maxL= max(maxL, r-l+1);
        }
        return maxL;
    }
};