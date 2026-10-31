class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int low = 0;
        int high = k-1;
        double maxi = -1e9;
        int res;
        int sum =0;
        while(high < n)
        {
            if(low == 0)
            {
                for(int i=low;i<=high;i++)
                {
                    sum = sum + nums[i];
                }
            }
            maxi = max((double)sum,maxi);
            sum = sum - nums[low];
            low ++;
            high++;
           if(high < n)
            {
                sum += nums[high];
            }

        }
        return double(maxi)/k;
    }
};