class Solution {
public:
    string findValidPair(string s)
    {
        unordered_map<char, int> hash;
        string sp;

        for(int i = 0;i < s.size();i++)
            hash[s[i]]++;
        for(int i =0;i< s.size() - 1 ;i++)
        {
            cout << hash[s[i]] << " :: " <<hash[s[i+1]] <<"\n";
            if (abs(hash[s[i]])+48 == s[i] && abs(hash[s[i+1]]) + 48 == s[i+1] && s[i] != s[i+1])
            {
                if (hash[s[i]]>0)
                {
                    sp.push_back(s[i]);
                    hash[s[i]] *= -1;
                }
                if (hash[s[i+1]]>0)
                {
                    sp.push_back(s[i+1]);
                    hash[s[i+1]] *= -1;
                    return (sp);

                }
            }
        }
        return (sp);
    }
};