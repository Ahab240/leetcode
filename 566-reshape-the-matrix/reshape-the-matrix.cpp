class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        
        // If reshape is not possible, return original matrix
        if (m * n != r * c) {
            return mat;
        }
        
        vector<vector<int>> result(r, vector<int>(c));
        int totalElements = m * n;
        
        for (int i = 0; i < totalElements; i++) {
            result[i / c][i % c] = mat[i / n][i % n];
        }
        
        return result;
    }
};