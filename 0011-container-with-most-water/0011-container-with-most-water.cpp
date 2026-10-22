class Solution {
public:
    int maxArea(vector<int>& height) {
        int grand=0;
        int current=0;
        int n= height.size();
        int l=0;
        int r=n-1;
        while(l<r)
        {
            int length=min(height[l],height[r]);
            int width =r-l;
            current = length * width;
            grand = max(current,grand);
            if(height[l]<height[r])
            {
                l++;
            }
            else r--;
        }
        return grand;
    }
};