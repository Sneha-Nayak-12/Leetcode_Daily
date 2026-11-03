class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int total_sum = 0;
        for(int i=0;i<accounts.size();i++)
        {
            int current = 0;
            for(int j=0;j<accounts[i].size();j++)
            {
                current = current + accounts[i][j];
            }
            total_sum = max(total_sum,current);
        }
        return total_sum;
    }
};