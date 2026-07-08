class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[26] = {0};
        for(int i=0;i<s.length();i++)
        {
            char ch = s[i];
            freq[ch - 'a']++;

        }
        for(int i=0;i<t.length();i++)
        {
            char ch = t[i];
            freq[ch - 'a']--;

        }
        for(int i=0;i<26;i++)
        {
            if(freq[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};