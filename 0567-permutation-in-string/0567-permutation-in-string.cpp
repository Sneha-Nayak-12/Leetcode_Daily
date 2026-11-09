class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        unordered_map<char,int> map;
        unordered_map<char,int> map2;
        for(int i=0;i<s1.size();i++)
        {
            map[s1[i]]++;
        }
        int l=0;
        int r=0;
        for(int j=0;j<s2.size();j++)
        {
            map2[s2[j]]++;

            if(j-l+1 > s1.size())
            {
                map2[s2[l]]--;
                if(map2[s2[l]] == 0)
                map2.erase(s2[l]);
                l++;
            }

            if(map==map2)
            {
                return true;
            }
        }
        return false;
        
    }
};