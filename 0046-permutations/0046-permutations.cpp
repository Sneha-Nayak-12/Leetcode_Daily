class Solution {
public:
    void recPermute(vector<int>&nums,vector<vector<int>>&ans,vector<int>&ds,int freq[])
    {
        if(nums.size() == ds.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                ds.push_back(nums[i]);
                freq[i]= 1;
                recPermute(nums,ans,ds,freq);
                freq[i]= 0;
                ds.pop_back();
            }
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int>ds;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++)
        {
            freq[i] = 0;
        }
        recPermute(nums,ans,ds,freq);
        return ans;
    }
};