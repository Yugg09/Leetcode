class Solution {
public:
       int m;
       int n;
       int area;
       
       int dfs(vector<vector<int>>& grid , int i , int j){
        if( i < 0 || i >= m || j < 0 || j >= n){
            return 0 ;
        }

        if(grid[i][j] == 0){
        return 0;
       }    
    
        
        grid[i][j] = 0; //mark visited

        return 1 + 
        dfs(grid , i + 1 , j)+
        dfs(grid , i - 1 , j)+
        dfs(grid , i , j + 1)+
        dfs(grid , i , j - 1);
      
      
       }
       
    int maxAreaOfIsland(vector<vector<int>>& grid) {
         m = grid.size();
         n = grid[0].size();
          area = 0;
          int ans = 0;

         for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){

                if(grid[i][j] == 1){
                     area = dfs(grid , i , j);

                }
              
              ans = max(ans , area);

            }
         }

         return ans;
        
    }
};