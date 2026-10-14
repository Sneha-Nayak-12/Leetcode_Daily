class Solution {
public:
    int firstUniqChar(string s) {
        // int freq[26] = {0};
        // for(int i=0;i<s.length();i++)
        // {
        //     freq[s[i]-'a']++;
        // }
        // for(int i=0;i<s.length();i++)
        // {
        //     if(freq[s[i]-'a'] == 1)
        //     {
        //         return i;
        //     }
        // }
        // return -1;
        int n = s.length();
        unordered_map<char,int> m;
        for(int i=0;i<n;i++)
        {
            m[s[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(m[s[i]]==1)
            {
                return i;
            }
        }
        return -1;
    }
};