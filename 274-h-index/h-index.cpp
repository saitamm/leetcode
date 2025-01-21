class Solution {
public:
    int hIndex(vector<int>& citations)
    {
        if (citations.size() == 1 && citations[0] != 0)
            return (1);
        sort(citations.begin(), citations.end(), greater<int>());
        for(int i = 0;i < citations.size();i++)
        {
            if (citations[i] < i + 1)
                return(i);
        }
        return (citations.size());
        
    }
};