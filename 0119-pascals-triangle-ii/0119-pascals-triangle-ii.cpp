class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n = rowIndex +1;

        vector<int>ans;

        long long value =1;

        ans.push_back(value);

        for(int i=1;i<n;i++){
            value = value*(n-i) /i;
            ans.push_back(value);
        }
        return ans;       
    }
};