class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1) return s;

        string a;
        int cycleLen = 2 * numRows - 2;
        
        for (int i = 0; i < numRows; i++) {
            for (int j = i; j < s.size(); j += cycleLen) {
                a += s[j];
                int secondIndex = j + cycleLen - 2 * i;
                if (i != 0 && i != numRows - 1 && secondIndex < s.size()) {
                    a += s[secondIndex];
                }
            }
        }
        return a;
    }
};