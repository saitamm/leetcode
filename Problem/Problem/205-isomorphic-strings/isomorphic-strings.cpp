class Solution {
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map <char, char> hash_map1;
        unordered_map <char, char> hash_map2;

        int i = 0;  
         while (s[i]) {
        if (hash_map1.find(s[i]) == hash_map1.end()) {
            hash_map1[s[i]] = t[i];
        } else if (hash_map1[s[i]] != t[i]) {
            return false;
        }
        i++;
    }
    i = 0;
        while (t[i]) {
        if (hash_map2.find(t[i]) == hash_map2.end()) {
            hash_map2[t[i]] = s[i];
        } else if (hash_map2[t[i]] != s[i]) {
            return false;
        }
        i++;
    }
        return (true);
        
        
    }
};