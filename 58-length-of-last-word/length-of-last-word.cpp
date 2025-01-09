class Solution {
public:
    int lengthOfLastWord(string s)
    {
        int flag = 0;
        for(int i = 0; i < s.size();i++)
        {
            if (s[s.size()-1 - i] == ' ' && flag)
                break;
            else if (s[s.size()-1 - i] != ' ')
            {
                flag++;
            }
        }
        return (flag);
        
    }
};