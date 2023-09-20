class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(mat.size()*mat[0].size()!=r*c){return mat;}
        vector<vector<int>>v(r, vector<int>(c, 0));
        int k=0;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                v[i][j]=mat[k/mat[0].size()][k%mat[0].size()];
                // here mat[0].size means the size of the column.
                k++;
            }
        }
        return v;
    }
};