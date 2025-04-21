class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words)
    {
        vector<int> result;
        int word_len = words[0].size();
        unordered_map<string, int> target_map;
        for(int i = 0;i < words.size();i++)
            target_map[words[i]]++;
        int i = 0;
        while (i < word_len)
        {
        unordered_map<string, int> window_map;
        int left = i, right = i;
        while (right < s.size())
        {
            string word_right = s.substr(right, word_len);
            right += word_len;
            if (target_map.find(word_right) != target_map.end())
            {
                window_map[word_right]++;
                while (window_map[word_right] > target_map[word_right])
                {
                    string left_word = s.substr(left, word_len);
                    window_map[left_word]--;
                    left += word_len;
                }
                if (window_map == target_map)
                    result.push_back(left);
            }
            else
            {
                window_map.clear();
                left = right;
            }
        }
        i++;
        }
        return(result);
    }
};