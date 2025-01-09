class Solution {
public:
   int numJewelsInStones(string jewels, string stones) {
    unordered_set<char> hash(jewels.begin(), jewels.end());
    int count = 0;
    for (char stone : stones) {
        if (hash.count(stone))
            count++;
    }
    return count;
}
};