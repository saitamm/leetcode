class Solution {
public:
    char kthCharacter(int k) 
    {
        string result;
        result.push_back('a');
        result.push_back('b');
        int i = 1;
        while (i < k)
        {
            string concat;
            int j = 0;
            while (j < result.size())
            {
                if (result[j] == 'z')
                    concat.push_back('a');
                else
                    concat.push_back(result[j]+1);
                j++;
            }
            result+= concat;
            i+=j;
        }
        return (result[k-1]);      
    }
};