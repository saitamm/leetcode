class Solution {
public:
    bool isPalindrome(string s)
    {
        string res;
        
        for( char &ch : s)
            ch = tolower(static_cast<unsigned char>(ch));
         for (char ch : s) 
         {
            if (std::isalnum(static_cast<unsigned char>(ch))) {
                res += ch;
        }
        }
        int size = res.size() -1;
        for (int i = 0; i < res.size() / 2 ; i++)
        {
            if (res[i]  != res[size])
                return (false);
            size--;
        }
        return (true);
    }
};