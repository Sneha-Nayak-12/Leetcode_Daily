class Solution {
public:
    int longestOnes(vector<int>& nums, int k)
    {
       int l=0;
       int zeroes = 0;
       int max_len = 0;
       for(int r=0;r<nums.size();r++)
       {
        if(nums[r]==0)
        {

            zeroes++;
        }
        while(zeroes > k)
        {
            if(nums[l]==0)
            {
                zeroes--;
            }
            l++;
        }
        int current = r-l+1;
        max_len = max(current,max_len);
    }
    return max_len;
    }
};