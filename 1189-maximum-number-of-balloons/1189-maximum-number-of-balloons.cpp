class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n = text.size();
        int res = INT_MAX;
        unordered_map<char,int> need;
        need['b'] = 1;
        need['a'] = 1;
        need['l'] = 2;
        need['o'] = 2;
        need['n'] = 1;
        unordered_map<char,int> have;
        for(int i=0;i<n;i++)
        {
            have[text[i]]++;
        }
        for(auto i: need)
        {
            char ch = i.first;
            int fneed = i.second;
            int fhave = have[ch];
            int times = fhave / fneed;
            res = min(res,times);
        }
        return res;
    }
};