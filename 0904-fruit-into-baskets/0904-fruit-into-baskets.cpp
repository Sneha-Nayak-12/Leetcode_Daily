class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int low = 0;
        int high = 0;
        unordered_map<int,int> m;
        int res = INT_MIN;
        while(high < n)
        {
            m[fruits[high]]++;
            while(m.size()>2)
            {
                m[fruits[low]]--;
                if(m[fruits[low]]==0)
                {
                    m.erase(fruits[low]);
                }
                low ++;
            }
            high++;
            int len = high-low;
            res = max(len,res);
        }
        return res;
    }
};