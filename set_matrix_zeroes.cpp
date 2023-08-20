class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int col0 = 0;

        for(int row = 0; row < m; row++){
            if(matrix[row][0] == 0){
                col0 = 1;
            }
        }

        for(int cnt = 0; cnt < m; cnt++){
            int row = cnt;
            for(int col = 0; col < n; col++){
                if(matrix[row][col] == 0){
                    matrix[row][0] = 0;
                    break;
                }
            }
        }

        for(int cnt = 1; cnt < n; cnt++){
            int col = cnt;
            for(int row = 0; row < m; row++){
                if(matrix[row][col] == 0){
                    matrix[0][col] = 0;
                    break;
                }
            }
        }

        for(int row = 1; row < m; row++){
                if(matrix[row][0] == 0){
                    for(int col = 0; col < n; col++){
                        matrix[row][col] = 0;
                }
            }
        }

        for(int col = 1; col < n; col++){
                if(matrix[0][col] == 0){
                    for(int row = 1; row < m; row++){
                        matrix[row][col] = 0;
                    }
                }
        }

        if(matrix[0][0] == 0){
            for(int col = 0; col < n; col++){
                matrix[0][col] = 0;
            }
        }

        if(col0 == 1){
            for(int row = 0; row < m; row++){
                matrix[row][0] = 0;
            }
        }

    }
};
