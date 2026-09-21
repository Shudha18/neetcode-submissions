class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int i=0, j=cols-1;
        int sum = 0;
        while(i<rows && j>=0){
            sum+=mat[i][j];
            i++; j--;
        }

        i=0; j=0;
        while(i<rows && j<cols){
            sum+=mat[i][j];
            i++; j++;
        }

        if(rows%2==1) sum -= mat[rows/2][cols/2];
        return sum;
    }
};