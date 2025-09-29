class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures)
    {
        stack<pair<int, int>> stk;
        vector<int> answer(temperatures.size());
        for(int idx= 0 ;idx < temperatures.size();idx++)
        {
            while (!stk.empty() && stk.top().second < temperatures[idx])
            {
                answer[stk.top().first] = idx - stk.top().first;
                stk.pop();
            }
            stk.push({idx, temperatures[idx]});
        }
        return (answer);
    }
};