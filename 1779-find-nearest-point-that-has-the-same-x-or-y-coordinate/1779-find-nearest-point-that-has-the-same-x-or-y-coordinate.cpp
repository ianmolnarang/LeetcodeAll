class Solution {
public:
   int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ind = -1;
        int dist = INT_MAX; 
        for(int i =0; i<points.size(); i++){
            if(points[i][0] == x || points[i][1] == y){
                int temp = abs(x-points[i][0])+abs(y-points[i][1]);
                if(dist > temp){
                    dist = temp;
                    ind = i;
                }
                
            }
        }
        return ind;
    }
};