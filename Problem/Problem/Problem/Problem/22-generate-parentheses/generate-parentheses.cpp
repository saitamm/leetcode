class Solution {
public:
    void generate(string st, int open, int close, int n, set<string> &res) {
    if (open == n && close == n ) {
        res.insert(st);
        return;
    }

    if (open < n) {
        generate(st + '(', open + 1, close, n, res);
    }
    if (close < open) {
        generate(st + ')', open, close + 1, n, res);
    }
}
    vector<string> generateParenthesis(int n) 
    {
        int start = n;
        set<string> Dp;

        int i = 0;
        while (i < n*2)
        {
            string res;
            int open = 1;
            int close = 0;
            res.push_back('(');
            generate(res, open, close, n, Dp);
            start--;
            i++;
        }
        vector<string> vec(Dp.begin(), Dp.end());
        return (vec);
    }
};