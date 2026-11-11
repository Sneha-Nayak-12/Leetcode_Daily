class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k)
    {
        int n = nums.size();
        int low=0;
        int high = 0;
        int product = 1;
        int res = 0;
        if(k<=1)
        {
            return 0;
        }
        while(high < n)
        {
            product = product * nums[high];
            while(product >=k)
            {
                product = product /nums[low];
                low++;
            }

            res = res + (high-low+1);
            high++;
        }
        return res;
        
    }
};