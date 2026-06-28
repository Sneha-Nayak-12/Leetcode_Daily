class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> mat(m,vector<int>(n));
        int s = original.size();
        if(original.size() != m*n)
        {
            return {};
        }
        for(int i=0;i<s;i++)
        {
            int row = i/n;
            int col = i%n;
            mat[row][col] = original[i];
        }
        return mat;
    }
};