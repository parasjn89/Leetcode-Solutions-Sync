class Solution {
public:

    int maxRowEle(vector<vector<int>>& mat, int row) {

        int col = 0;

        for(int j = 1; j < mat[0].size(); j++) {

            if(mat[row][j] > mat[row][col]) {
                col = j;
            }
        }

        return col;
    }


    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        int rows = mat.size();
        int cols = mat[0].size();

        int low = 0;
        int high = rows - 1;

        while(low <= high) {

            int mid = low + (high - low) / 2;

            int col = maxRowEle(mat, mid);

            int up = -1;
            int down = -1;

            if(mid > 0) {
                up = mat[mid - 1][col];
            }

            if(mid < rows - 1) {
                down = mat[mid + 1][col];
            }

            int current = mat[mid][col];

            if(current > up && current > down) {
                return {mid, col};
            }

            else if(current < up) {
                high = mid - 1;
            }

            else {
                low = mid + 1;
            }
        }

        return {-1, -1};
    }
};