class Solution {
public:
    bool wordPattern(string pattern, string s)
    {
        vector<string> tokens;
        istringstream stream(s);
        string token;

        while (stream >> token) 
            tokens.push_back(token);
        if (pattern.size() != tokens.size())
            return (false);
        unordered_map<char, string> map_1;
        unordered_map<string, char> map_2;
        for(int i = 0; i < pattern.size();i++)
        {
            if (map_1.find(pattern[i]) == map_1.end() && map_2.find(tokens[i]) == map_2.end())
                {
                    map_1[pattern[i]] = tokens[i];
                    map_2[tokens[i]] = pattern[i];
                }
            else if (map_1[pattern[i]] != tokens[i] || map_2[tokens[i]] != pattern[i])
                return (false);
        }
        return (true);
    }
};