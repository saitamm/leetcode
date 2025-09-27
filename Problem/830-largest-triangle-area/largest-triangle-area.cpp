class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) 
    {
        double Area = 0;
        int idx = 0;

        for(int i = 0;i <points.size() -2;i++)
        {
            for(int j = i+1;j< points.size()-1;j++)
            {
                for(int k = j +1;k<points.size();k++)
                {
                    double Ar;
                    double A1 = points[i][0] * (points[j][1] - points[k][1]);
                    double A2 = points[j][0] * (points[k][1] - points[i][1]);
                    double A3 = points[k][0] * (points[i][1] - points[j][1]);
                    Ar = fabs(A1+A2+A3)/2.0;
                    Area = max(Ar, Area);
                }
            }
        }
        return (Area);
        
    }
};