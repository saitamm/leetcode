class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures)
    {
        stack<int> stk;
        vector<int> answer(temperatures.size());
        for(int idx= 0 ;idx < temperatures.size();idx++)
        {
            while (!stk.empty() && temperatures[stk.top()] < temperatures[idx])
            {
                answer[stk.top()] = idx - stk.top();
                stk.pop();
            }
            stk.push(idx);
        }
        return (answer);
    }
};