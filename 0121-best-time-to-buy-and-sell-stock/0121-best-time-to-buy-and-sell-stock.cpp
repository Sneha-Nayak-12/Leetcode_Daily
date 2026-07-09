class Solution {
public:
    int maxProfit(vector<int>& prices)
{
    int minimumPrice = prices[0];
    int maximumProfit = 0;

    for(int i=1;i<prices.size();i++)
    {
        minimumPrice = min(minimumPrice, prices[i]);

        int profit = prices[i] - minimumPrice;

        maximumProfit = max(maximumProfit, profit);
    }

    return maximumProfit;
}
};