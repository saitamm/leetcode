class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits)
    {
        unordered_map<int, int> hash;
        vector<int> res;

        for(int i = 0;i<digits.size();i++)
            hash[digits[i]]++;
        int it = 100;
        while (it<1000)
        {
            int hundreds = it / 100;
            int tens = (it / 10) % 10;
            int units = it % 10;
            if (hash[hundreds])
            {
                hash[hundreds]--;
                if (hash[tens])
                {
                    hash[tens]--;
                    if (hash[units])
                    {
                        hash[units]--;
                        if (!(it%2))
                        {
                            res.push_back(it);

                        }
                            hash[units]++;
                    }
                            hash[tens]++;
                }
                            hash[hundreds]++;
            }
            it++;
        }
        return (res);
        
    }
};