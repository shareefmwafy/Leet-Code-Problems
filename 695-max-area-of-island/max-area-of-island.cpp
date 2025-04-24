class Solution {
private:
    int dfs(vector<vector<int>>& grid, int i, int j){
        int rows = grid.size();
        int cols = grid[0].size();

        if( i < 0 || j < 0 || i>=rows || j>=cols || grid[i][j] == 0 ){
            return 0;
        }
            grid[i][j] = 0;

            return 1 + dfs(grid, i+1, j)+
            dfs(grid, i-1, j)+
            dfs(grid, i, j+1)+
            dfs(grid, i, j-1);
    }

public:
        int maxAreaOfIsland(vector<vector<int>>& grid) {
        int area = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        if(grid.empty())
            return 0;

        for(int i = 0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(grid[i][j] == 1){
                    area = max(area, dfs(grid, i, j));
                    
                }
                    
            }
        }
        return area;
    }
};