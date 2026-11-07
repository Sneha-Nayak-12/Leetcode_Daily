class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        int freq[26]={0};
        int left = 0;
        int max_freq = 0;
        int max_window = 0;
        for(int right=0;right<s.size();right++)
        {
            freq[s[right]-'A']++;
            max_freq = max(max_freq,freq[s[right]-'A']);
            int window_len = right-left+1;
            if(window_len - max_freq > k)
            {
                freq[s[left]-'A']--;
                left++;
            }
            window_len = right-left+1;
            max_window = max(window_len,max_window);

        }
        return max_window;
    }
};