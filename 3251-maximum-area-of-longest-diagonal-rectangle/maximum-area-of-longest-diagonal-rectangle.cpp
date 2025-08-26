class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions)
    {
        double Length;
        int idx =-1;
        double maxLength =0;

        for(int i = 0;i<dimensions.size();i++)
        {
            Length = sqrt(dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1]);
            if (Length >= maxLength)
            {
                if (idx >= 0)
                {
                    if (Length == maxLength && dimensions[i][0]* dimensions[i][1] > dimensions[idx][0]*dimensions[idx][1])
                    {
                        maxLength = Length ;
                        idx = i;

                    }
                    else if(Length > maxLength)
                    {
                        maxLength = Length;
                        idx = i;
                    }
                }
                else
                {
                    maxLength = Length ;
                    idx = i;
                }
            }

        }
        return (dimensions[idx][0]*dimensions[idx][1]);
    }
};