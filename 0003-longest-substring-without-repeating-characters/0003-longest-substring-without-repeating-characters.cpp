class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int n = s.size();
        // int current = 0;
        // int maxLen = 0;
        // for(int i=0;i<n;i++)
        // {
        //     char a = s[i];
        //     char b = s[i+1];
        //     if(a == b)
        //     {
        //         current = 0;
        //     }
        //     if(a != b)
        //     {
        //         current++;
        //         maxLen = max(current,maxLen);
        //     }
        // }
        int n = s.size();
        int max_len=0;
        for(int i=0;i<n;i++)
        {
            int hash[256]={0};
            for(int j=i;j<n;j++)
            {
                if(hash[s[j]]==1)
                {
                    break;
                }
                int len = j-i+1;
                hash[s[j]]=1;
                max_len = max(len,max_len);
            }
        }
        return max_len;
    }
};