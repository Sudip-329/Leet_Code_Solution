class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>> answer = matrix;
        for (int j = 0; j < matrix[0].size(); ++j) {
            int maxValue = INT_MIN;
            for (int i = 0; i < matrix.size(); ++i) {
                maxValue = max(maxValue, matrix[i][j]);
            }

            for (int i = 0; i < matrix.size(); ++i) {
                if (answer[i][j] == -1) {
                    answer[i][j] = maxValue;
                }
            }
        }
        return answer;
    }
};