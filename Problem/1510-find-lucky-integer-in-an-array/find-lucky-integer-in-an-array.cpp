class Solution {
public:
    int findLucky(vector<int>& arr) 
    {
        unordered_map<int, int> count;
        int m = -1;
        for(int i = 0;i<arr.size();i++)
        {
            count[arr[i]]++;
        }
        for( auto it : arr)
        {
            if (count[it] == it && it > m)
                m = it;
        }
        return (m);
        
    }
};