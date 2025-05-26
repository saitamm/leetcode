class Solution {
public:
    int evalRPN(vector<string>& tokens)
    {
        stack<int> _stack;

        for(int i = 0;i < tokens.size();i++)
        {
            stringstream ss(tokens[i]);
            int num;
            ss >> num;
            if (ss.fail())
            {

            int b = _stack.top();
            _stack.pop();
            int a = _stack.top();
            _stack.pop();
            if (tokens[i] == "+")
                _stack.push(a + b);
            else if (tokens[i] == "-")
                _stack.push(a - b);
            else if (tokens[i] == "*")
                _stack.push(a * b);
            else if (tokens[i] == "/")
                _stack.push(a / b);
            continue;
            }
            _stack.push(num);
        }
        return (_stack.top());
        
    }
};