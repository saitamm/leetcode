class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        int count = 0;
        unordered_map<int, unordered_map<int, int>> map;
        vector<int> vec;
        for(int i =0 ; i < pick.size(); i++)
        {
            map[pick[i][0]][pick[i][1]]++;
            if (map[pick[i][0]][pick[i][1]] > pick[i][0] && find(vec.begin(), vec.end(), pick[i][0]) == vec.end())
            {
                vec.push_back(pick[i][0]);
                 count++;
            }
        }
        return (count);
    }
};