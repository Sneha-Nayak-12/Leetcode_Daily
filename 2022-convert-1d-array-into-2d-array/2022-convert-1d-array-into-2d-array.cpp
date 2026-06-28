class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int s = original.size();
        
        // Quick check: if sizes don't match, return empty
        if (s != m * n) return {};
        
        vector<vector<int>> mat(m, vector<int>(n));
        
        // Fill directly using row/col mapping
        for (int i = 0; i < s; i++) {
            mat[i / n][i % n] = original[i];
        }
        
        return mat;
    }
};
