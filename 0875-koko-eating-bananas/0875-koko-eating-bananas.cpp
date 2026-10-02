class Solution {
public:
    int minEatingSpeed(vector<int>& arr, int h) {
        int low = 1;
        int high = *max_element(arr.begin(),arr.end());

        while(low<= high){

            int mid= low+(high-low)/2;

            long long hours = 0;

            for(int i=0;i<arr.size();i++){
               hours += ceil((double)arr[i] /mid);
            }

            if(hours <= h){
                high = mid-1;
            }
            else{
                low= mid+1;
            }
        }
        return low;
    }
};