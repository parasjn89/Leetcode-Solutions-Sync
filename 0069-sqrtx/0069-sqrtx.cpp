class Solution {
public:
    int mySqrt(int n) {
        long low = 1;
        long high = n;
        long ans = 1;


        if(n < 2)
            return n;


        while(low<=high){
              long mid =(low+high) /2;

              if((mid*mid) <= n){
                ans = mid;
                low = mid +1;
              }
              else{
                high = mid -1;
              }
        }
        return ans;
    }
};