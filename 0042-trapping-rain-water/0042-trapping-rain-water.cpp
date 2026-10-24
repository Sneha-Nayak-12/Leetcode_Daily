class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l_max[n];
        int r_max[n];
        l_max[0]=height[0];
        r_max[n-1]=height[n-1];
        for(int i=1;i<n;i++)
        {
            l_max[i]=(max(l_max[i-1],height[i]));
        }
        for(int j=n-2;j>=0;j--)
        {
            r_max[j]=(max(r_max[j+1],height[j]));
        }
        int ans = 0;
        for(int k=0;k<n;k++)
        {
            ans = ans + (min(l_max[k],r_max[k])-height[k]);
        }
        return ans;
    }
};