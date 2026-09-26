class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int total_sum =0;
        for(int i=0;i<accounts.size();i++)
        {
            int current_sum =0;
            for(int j=0;j<accounts[i].size();j++)
            {
                current_sum = current_sum + accounts[i][j];
                total_sum = max(current_sum,total_sum);
            }
        }
        return total_sum;
    }
};