class Solution {
public:
    string reverseWords(string s)
    {
        int left  = 0;
        int right = 0;
        int index = s.size()-1;
        string h;
        int i = 0;
        while (s[i] == ' ')
            i++;
        while (index >= i)
        {
            while(index >= i && s[index] == ' ')
                index--;
            right = index;
            while (index >= i && s[index] != ' ')
                index--;
            left = index + 1;
            while (left <= right)
            {
                h.push_back(s[left]);
                left++;
            }
            if (left != i && index >= i)
                h.push_back(' ');
        }
        return(h);
    }
};