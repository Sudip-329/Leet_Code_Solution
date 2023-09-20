class Solution
{
public:
    bool isValidSudoku(vector<vector<char> > &board)
    {
        // Create three 2D arrays to keep track of used numbers in rows, columns, and subgrids.
        int used1[9][9] = {0}, used2[9][9] = {0}, used3[9][9] = {0};
        
        // Loop through each cell of the Sudoku board.
        for(int i = 0; i < board.size(); ++i)
        {
            for(int j = 0; j < board[i].size(); ++j)
            {
                // Check if the current cell contains a digit (not a dot).
                if(board[i][j] != '.')
                {
                    // Calculate the numerical value of the digit.
                    int num = board[i][j] - '0' - 1;
                    
                    // Calculate the index of the subgrid that the current cell belongs to.
                    int k = i / 3 * 3 + j / 3;
                    
                    // Check if the current digit is already used in the current row, column, or subgrid.
                    if(used1[i][num] || used2[j][num] || used3[k][num])
                        return false; // If already used, the Sudoku is invalid.
                    
                    // Mark the current digit as used in the respective row, column, and subgrid.
                    used1[i][num] = used2[j][num] = used3[k][num] = 1;
                }
            }
        }
        
        // If all checks pass without returning false, the Sudoku is valid.
        return true;
    }
};
