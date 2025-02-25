class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {
        int j  = 0;
        int i = 0;
        int sum = 0;
        if (gas.size() == 1 && gas[0] >= cost[0])
            return (0);
        while (i < gas.size())
        {
            int sum = 0;
            if (gas[i] > cost[i])
            {
                sum = gas[i] - cost[i];
                int end = i;
                int start = i+1;
                if (end < 0)end = gas.size();
                while ((start % gas.size()) != end)
                {
                    if (sum + gas[start % gas.size()] < cost[start % gas.size()])
                        break;
                    sum += gas[start % gas.size()] - cost[start%gas.size()];
                    start++;
                }
                if (start % gas.size() == end)
                    return (i);
            }
            i++;
        }
        return (-1);
    }
};