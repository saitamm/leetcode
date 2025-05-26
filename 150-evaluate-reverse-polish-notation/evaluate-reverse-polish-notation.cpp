class Solution {
public:
    int evalRPN(vector<string>& tokens)
    {
        stack<int> _stack;

        for(int i = 0;i < tokens.size();i++)
        {
            if (tokens[i] == "+" || tokens[i] == "/" || tokens[i] == "*" || tokens[i] == "-")
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
            }
            else
            {
                stringstream ss(tokens[i]);
                int num;
                ss >> num;
                _stack.push(num);
            }
        }
        return (_stack.top());
        
    }
};