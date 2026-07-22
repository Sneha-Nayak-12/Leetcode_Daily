class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int left = 0;
        // for(int right=0;right<nums.size();right++)
        // {
        //     if(nums[right]!=0)
        //     {
        //         swap(nums[left],nums[right]);
        //         left++;
        //     }
        // }

        int l =0;
        for(int r=0;r<nums.size();r++)
        {
            if(nums[r] != 0)
            {
                swap(nums[l],nums[r]);
                l++;
            }
        }
        return;
    }
};