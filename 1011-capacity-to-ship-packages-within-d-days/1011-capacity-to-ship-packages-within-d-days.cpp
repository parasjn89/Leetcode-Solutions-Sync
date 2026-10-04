class Solution {
public:


    int daysReq(vector<int>& weight,int capacity){
        int days = 1;
        int load = 0;

        for(int i=0;i<weight.size();i++){
            if(load + weight[i] <= capacity){
                load += weight[i];
            }
            else{
                days++;
                load = weight[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weight, int days) {
        int low= *max_element(weight.begin(),weight.end());
        int high =0;
        for(int i=0;i<weight.size();i++){
            high += weight[i];
        }

        while(low<=high){

            int mid = low+(high-low) / 2;

            if(daysReq(weight,mid) <= days){
                high= mid-1;
            }
            else{
                low = mid+1;
            }
        }

    return low;
    }
};