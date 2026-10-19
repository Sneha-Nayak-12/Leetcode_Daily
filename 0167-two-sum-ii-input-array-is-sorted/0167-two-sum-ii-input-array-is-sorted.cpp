class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int l = 0;
        int r = n-1;
        int sum =0;
        while(l<r)
        {
            sum = numbers[l] + numbers[r];
            if(sum == target)
            {
                return{l+1,r+1};
            }
            else if(sum < target)
            {
                l++;
            }
            else if(sum > target)
            {
                r--;
            }
        }
        return{};




        // int right = numbers.size()-1;
        // int left = 0;
        // while(left<right)
        // {
        //     int sum = numbers[left] + numbers[right];
        //     if(sum == target)
        //     {
        //         return{left + 1,right +1};
        //     }
        //     else if(sum < target)
        //     {
        //         left ++;
        //     }
        //     else{
        //         right --;
        //     }
        // }
        // return {};

    }
};