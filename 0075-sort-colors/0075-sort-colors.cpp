class Solution {
public:
    void sortColors(vector<int>& nums) {
        int Z_count=0;
        int O_count=0;
        int T_count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                Z_count++;
            }
            else if(nums[i]==1)
            {
                O_count++;
            }
            else
            {
                T_count++;
            }
        }
                int i=0;
                while(Z_count >0)
                {
                    nums[i]=0;
                    Z_count--;
                    i++;
                }
                while(O_count>0)
                {
                    nums[i]=1;
                    O_count--;
                    i++;
                }
                while(T_count>0){
                    nums[i]=2;
                    T_count--;
                    i++;
                }
    }
};