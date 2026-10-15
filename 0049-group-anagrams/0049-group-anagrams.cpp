class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // unordered_map <string, vector<string>> m;
        // for(string s: strs)
        // {
        //     string temp = s;
        //     sort(temp.begin(),temp.end());
        //     m[temp].push_back(s);
        // }
        // vector<vector<string>> ans;
        // for(auto x:m)
        // {
        //     ans.push_back(x.second);
        // }
        // return ans;





        unordered_map<string,vector<string>> m;
        vector<vector<string>>ans;
        for(string s : strs)
        {
            string temp = s;
            sort(temp.begin(),temp.end());
            m[temp].push_back(s);
            vector<vector<string>>ans;
        }
        for(auto x : m)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};