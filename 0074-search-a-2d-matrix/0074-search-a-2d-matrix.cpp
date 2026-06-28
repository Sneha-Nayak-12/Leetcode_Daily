class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int cell = matrix[0][m-1];
        int i=0;
        int j =n-1;
        while(i<m && j>=0)
        {
            if(matrix[i][j] == target)
            {
                //cout<<"found at cell (" <<i<<","<<j<<")"<<endl;
                return true;
            }
            else if(matrix[i][j] > target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        //key not found
        return false;
    }
};