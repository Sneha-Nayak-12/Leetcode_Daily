class Solution {
public:
    void Possibles(int open,int close,int n,string &temp,vector<string> &res)
    {
        if(open == n && close == n)
        {
            res.push_back(temp);
            return;
        }
        //open
        if(open<n)
        {
            temp.push_back('(');
            Possibles(open+1,close,n,temp,res);
            temp.pop_back();
        }
        //close
        if(close < open)
        {
            temp.push_back(')');
            Possibles(open,close+1,n,temp,res);
            temp.pop_back();
        }
        return;
    }

    vector<string> generateParenthesis(int n) {
        int open = 0;
        int close = 0;
        string temp;
        vector<string> res;
        Possibles(open,close,n,temp,res);
        return res;
    }
};