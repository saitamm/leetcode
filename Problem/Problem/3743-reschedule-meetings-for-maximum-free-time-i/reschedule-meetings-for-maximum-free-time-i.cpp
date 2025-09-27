class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) 
    {
        int start = 0;
        int end = 0;
        vector<int> gep;
        gep.push_back(startTime[0]);
        int freeTime = eventTime - endTime[endTime.size()-1];
        for(int i = 0;i<startTime.size()-1;i++)
            gep.push_back(startTime[i+1] - endTime[i]);
        gep.push_back(freeTime);
        int maxLength = 0;
        int sum = 0;
        while (end < gep.size())
        {
            if (end-start == k+1)
            {
                maxLength  = max(sum, maxLength);
                sum -= gep[start];
                start++;
            }
            else
            {
                sum += gep[end];
                end++;
            }
        }
        if (end -start == k+1)
            maxLength = max(sum, maxLength);
        return(maxLength);
    }
};