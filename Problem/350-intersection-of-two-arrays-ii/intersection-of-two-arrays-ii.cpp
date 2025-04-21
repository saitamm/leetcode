int search(vector<int> &a, int& j, int c)
{
    while (j < a.size() && a[j] <= c)
    {
        if (a[j] == c)
        {
            j++;
            return (1);
        }
        j++;
    }
    return (0);
}
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> d;
          if (nums1.size() < nums2.size()) std::swap(nums1, nums2);

        int j = 0;
        for (int i = 0; i < nums2.size(); i++) {
            if (search(nums1, j, nums2[i])) {
                d.push_back(nums2[i]);
            }
        }

        return d;
    }
};