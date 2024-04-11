class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        queue< pair<int, int> > indexQ;
        int ans = 0, row, col;

        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                if(grid[i][j] == '1'){
                    ans++;
                    indexQ.push(make_pair(i, j));
                    grid[i][j] = '0';
                    while(!indexQ.empty()){
                        pair<int, int>indexPair = indexQ.front();
                        indexQ.pop();
                        row = indexPair.first;
                        col = indexPair.second;

                        if(row-1 >= 0 && row-1 < grid.size() && col >= 0 && col < grid[i].size() && grid[row-1][col] == '1'){
                            indexQ.push(make_pair(row-1, col));
                            grid[row-1][col] = '0';
                        }if(row+1 >= 0 && row+1 < grid.size() && col >= 0 && col < grid[i].size() && grid[row+1][col] == '1'){
                            indexQ.push(make_pair(row+1, col));
                            grid[row+1][col] = '0';
                        }if(row >= 0 && row < grid.size() && col-1 >= 0 && col-1 < grid[i].size() && grid[row][col-1] == '1'){
                            indexQ.push(make_pair(row, col-1));
                            grid[row][col-1] = '0';
                        }if(row >= 0 && row < grid.size() && col+1 >= 0 && col+1 < grid[i].size() && grid[row][col+1] == '1'){
                            indexQ.push(make_pair(row, col+1));
                            grid[row][col+1] = '0';
                        }
                    }
                }
            }
        }

        return ans;
    }
};
