class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2)
    {
        unsigned long long sum1=0;
        unsigned long long sum2=0;
        int zero1=0;
        int zero2=0;
        for(int i = 0;i<nums1.size();i++)
            {
                if (nums1[i] == 0)
                {
                    sum1+=1;
                    zero1++;
                }
                else
                    sum1+=nums1[i];
            }
        for(int i = 0;i<nums2.size();i++)
            {
                if (nums2[i] == 0)
                {
                    sum2+=1;
                    zero2++;
                }
                else
                    sum2+=nums2[i];
            }
        if (!zero1 && !zero2)
            return ((sum1 == sum2) ? sum1 : -1);
        if(sum1<sum2 && !zero1)
            return (-1);
        if(sum2<sum1 && !zero2)
            return (-1);    
        return (max(sum2, sum1));
        }
};