class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            {
                continue;
            }
            int l=i+1;
            int r=n-1;
            int sum = -1 * nums[i];
            while(l<r)
            {
                if((nums[l]+nums[r])==sum)
                {
                    res.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    while(l<n && nums[l]==nums[l-1])
                    {
                        l++;
                    }
                    while(r>=0 && nums[r]==nums[r+1])
                    {
                        r--;
                    }
                }
                else if((nums[l]+nums[r])<sum)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
        return res;
    }
};