class Solution {
public:
    bool circularArrayLoop(vector<int>& nums)
    {
        int size = nums.size();
        int left = 0;
        unordered_map <int, int> hash;

        for(int i = 0 ; i < size;i++)
            hash[i] = -1;
        vector<int> visited(size);

        while (left < size)
        {
        int right = left;
        hash[left]=(left+nums[left] ) % size;
        if (nums[right] >  0)
        {
        while (nums[right] >= 0 && nums[right] != size)
        {
            if (visited[right] == left)
                break;
            visited[left] = left;
            visited[right] = left;
            hash[right] = (right+nums[right])%size;
            if (hash[right] == left && left != right)
                return (true);
            if (nums[right] < 0)
                return(false);
            right = (right + nums[right]) % size;
            if (right == left)  
                break;
        }
        }
        else
        {
        while (nums[right] <= 0 && abs(nums[right]) != size)
        {
           hash[right] = ((right + nums[right]) % size + size) % size;
           cout << "left = " << left<<endl;
           cout << "Right = " << right<<endl;
           cout << "hash[right] = "<< hash[right]<<endl;
            if (hash[right] == left && right != left)
                return (true);
            if (visited[right] == left)
               break;
            visited[left] = left;
            visited[right] = left;
            if (nums[right] > 0)
                return(false);
            right = ((right + nums[right]) % size + size) % size;
             if (right == left)  
                break;
        }
        }
        left++;
        }
        return (false);
        
    }
};