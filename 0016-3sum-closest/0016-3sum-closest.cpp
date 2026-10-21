#include <climits>
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int Total_diff= INT_MAX;
        int DS = nums[0] + nums[1] + nums[2];
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
                int Current_diff = abs(target - (nums[i] + nums[l] + nums[r]));
                int digit_sum = nums[l]+nums[r]+nums[i];
                if(Current_diff < Total_diff)
                {
                    Total_diff=Current_diff;
                    DS = digit_sum;
                }
                if (digit_sum == target) return target;
                else if (digit_sum < target) l++;
                else r--;
            }
        }
        return DS;
    }
};