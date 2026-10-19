class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        while (j<n)
        {
            if(nums[j] !=0)
            {
                swap(nums[i],nums[j]);
                i++;
            }
            j++;
        }
    }



    // int l=0;
    // for(int r=0;r<nums.size();r++)
    // {
    //     if(nums[r] != 0)
    //     {
    //     swap(nums[l],nums[r]);
    //     l++;
    //     }
    // }
    // return;
};