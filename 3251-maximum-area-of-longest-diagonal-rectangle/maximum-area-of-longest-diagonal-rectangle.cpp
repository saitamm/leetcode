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
            size_t area = dimensions[i][0]* dimensions[i][1];
            if (Length >= maxLength)
            {
                    if (Length == maxLength &&  area > dimensions[idx][0]*dimensions[idx][1] )
                    {
                        maxLength = Length ;
                        idx = i;

                    }
                    else if (Length > maxLength)
                    {
                        maxLength = Length;
                        idx = i;
                    }
            }

        }
        return (dimensions[idx][0]*dimensions[idx][1]);
    }
};