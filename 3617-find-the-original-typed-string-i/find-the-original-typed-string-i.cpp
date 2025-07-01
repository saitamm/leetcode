class Solution {
public:
    int possibleStringCount(string word) 
    {
        int k =1;
        int left = 0;
        int right = 1;
        while (right < word.size())
        {
            if (word[left] == word[right])
            {
                while (right < word.size() && word[right] == word[left])
                    right++;
                k = k+ right -left-1;
                left = right;
                right = left +1;
            }
            else
                left++;
        }
        return (k);
        
    }
};