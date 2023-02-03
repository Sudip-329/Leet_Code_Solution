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


//Binary search approch
//If all the matrix element are stored in a array, they are sorted in ascending order
//that means binary search can be performed!!!

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int start=0;
        int end = m*n -1;
        int mid = start + (end - start)/2;
        
        while(start<=end)
        {
            //we have only mid but it is a 2d matrix , row col value needed.
            int element = matrix[mid/n][mid%n];
            if(element == target)
            {
                return 1;
            }
            else if(element<target)
            {
                start = mid+1;
            }
            else{
                end= mid -1;
            }
            mid = start + (end- start)/2;
        }
        return 0;
    }
};