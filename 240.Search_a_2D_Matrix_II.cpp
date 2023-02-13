//Done using linear search.

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(matrix[i][j]==target)
                {
                    return true;
                }

            }
        }
        return false;      
    }
};



//Binary search

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowindex=0;
        int colindex = col -1;
        while(rowindex<row && colindex>=0)
        {
            int element = matrix[rowindex][colindex];
            if(element==target)
            {
                return 1;
            }

            if(element<target)
            {
                rowindex++;
            }
            else
            {
                colindex--;
            }
        }
        return 0;
    }
};