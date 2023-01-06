class Solution{
public :
    
    int maxPoints(vector<vector<int>>& points) 
    {
        if(points.size()<=2) 
            return points.size(); //with 2 points there exist a line forsho
        int maxi=0;
        int n=points.size();
        for(int i=0;i<n;i++){

            for(int j=i+1;j<n;j++){
    
                int x1 = points[i][0];
                int x2 = points[j][0];
                int y1 = points[i][1];
                int y2 = points[j][1];    

                // double slope = double(y2 - y1)/double(x2 - x1);
                int total=2; 
                //k should not equal to i and j so checking in a loop itself
                for(int k=0;k<n && k!=i && k!=j;k++){
                    
                    int x = points[k][0];
                    int y = points[k][1];
                    // third point
                    // double(y - y1)/double(x1 - x1)
                    //here with the help of cross checking the third point lie on the line or not
                    if((y2 - y1)*(x - x1) == (x2 - x1)*(y - y1))
                        total++;
                }
                maxi = max(maxi, total);
            }
        }
        return maxi;
    }
};