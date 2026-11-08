class Solution {
public:
    int rowCount(vector<int> &arr){
        int count=0;
        for(auto it:arr){
            if(it==1){
                count++;
            }
        }
        return count;
    }
    int colCount(vector<vector<int>> &arr,int j){
        int count=0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i][j]==1){
                count++;
            }
        }
        return count;
    }
    int countServers(vector<vector<int>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    if(rowCount(grid[i])>1 || colCount(grid,j)>1){
                        count++;
                    }
                }
            }

        }
        return count;
        
    }
};