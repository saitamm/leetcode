class Solution {
public:
    int possibleStringCount(string word) 
    {
        int k =1;
        int idx = 0;
        while (idx < word.size()-1)
        {
            if (word[idx+1] == word[idx])
                k++;
            idx++;
        }
        return (k);
    }
};