class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int, int> hash_map;
        stack<int> st;
        for (int num : nums2) {
            while (!st.empty() && st.top() < num) {
                hash_map[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }
        while (!st.empty()) {
            hash_map[st.top()] = -1;
            st.pop();
        }
        vector<int> result;
        for (int num : nums1) {
            result.push_back(hash_map[num]);
        }
        return (result);
    }
};