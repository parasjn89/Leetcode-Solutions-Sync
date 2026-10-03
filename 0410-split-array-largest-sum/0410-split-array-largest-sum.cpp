class Solution {
public:

    int countSubarr(vector<int>& nums,int limit){

        int count = 1;
        int sum= 0;

        for(int i=0;i<nums.size();i++){

            if(sum+nums[i]<=limit){
                sum += nums[i];
            }
            else{
                count++;
                sum = nums[i];
            }

        }

     return count;
    } 
    

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(),nums.end());
        int high =0;

         for(int x : nums) {
            high += x;
        }

        while(low<=high){

            int mid = low + (high-low)  / 2;

            if(countSubarr(nums,mid)<=k){
                high = mid-1;
            }
            else{
                low= mid+1;
            }
        }
        return low;
    }
};