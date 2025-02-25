class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {
        int j  = 0;
        int i = 0;
        int sum = 0;
        int size = gas.size();
        if (size == 1 && gas[0] >= cost[0])
            return (0);
        while (i < size)
        {
            int sum = 0;
            if (gas[i] > cost[i])
            {
                sum = gas[i] - cost[i];
                int end = i;
                int start = i+1;
                if (end < 0)end = size;
                int mod = start % size;
                while (mod != end)
                {
                    mod = start % size;
                    if (sum + gas[mod] < cost[mod])
                        break;
                    sum += gas[mod] - cost[mod];
                    start++;
                }
                if (mod == end)
                    return (i);
            }
            i++;
        }
        return (-1);
    }
};