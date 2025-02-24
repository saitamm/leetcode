class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int left = 0;
        int right =height.size() -1;
        int water = 0;

        while (left < height.size())
        {
            int temp = min(height[left], height[right]) * (right - left);
            water = max(water, temp);
            if (height[right] < height[left])
                right--;
            else
                left++;
        }
        return (water);
        
    }
};