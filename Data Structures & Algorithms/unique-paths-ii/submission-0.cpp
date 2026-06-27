class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> res(m, vector<int>(n, -1));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1){
                    res[i][j] = 0;
                    continue;
                }
                if(i==0 && j==0){
                    res[i][j] = 1;
                }else{
                    int left = 0, top = 0;
                    if(i > 0) left = res[i-1][j];
                    if(j > 0) top = res[i][j-1];
                    int curr = left+top;
                    res[i][j] = curr;
                }
            }
        }
        return res[m-1][n-1];
    }
};