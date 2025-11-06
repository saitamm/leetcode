class Solution {
public:
    bool isValid(string s)
    {
        if (s.size() % 2 == 1)
            return (false);
        stack<char>stack;
        for(int i = 0;i < s.size();i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                stack.push(s[i]);
            }
            else
            {
                if (stack.empty())
                    return (false);
                if ((s[i] == ')' && stack.top() == '(') || 
                s[i] == '}' && stack.top() == '{' ||
                s[i] == ']' && stack.top() == '[')
                {
                    stack.pop();
                }
                else
                    return (false);
            }
        }
        if (stack.empty())
            return (true);
        return (false);
    }
};