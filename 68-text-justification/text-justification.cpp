class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth)
    {
        vector<string> result;
        int left = 0;
        while (left < words.size())
        {
            int end = left;
            int max = maxWidth;
            while (end <words.size())
            {
                if (max - end+left < (int)words[end].size())
                    break;
                max-=words[end].size();
                end++;
            }
            string s;
            int nb = (end - left-1 == 0) ? 0 : max / (end - left-1);
            int extra = (end - left -1 == 0) ? 0 : max %(end-left-1);
            while (1)
            {
                s += words[left];
                left++;
                if(left>=end)
                    break;
                int i = 0;
                for(i =0;i < nb - 1 +(extra >0) && end < words.size();i++)
                    s+=" ";
                s+=" ";
                extra--;
            }

            while (s.size() <maxWidth)
                s+=" ";
            result.push_back(s);
        }
        return (result);
    }
};