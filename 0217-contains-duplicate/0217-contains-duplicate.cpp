class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        unordered_map<int,int> m;
        for(int i : nums)
        {
            if(m.find(i) != m.end())
            {
                m[i]++;
            }
            else{
                m[i]++;
            }
        }
        for(auto it : m)
            {
                if(it.second >= 2)
                {
                    return true;
                }
            }
        return false;
    }
};