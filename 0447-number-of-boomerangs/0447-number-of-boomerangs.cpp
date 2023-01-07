class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int n =  points.size() ; 
        int total = 0 ; 
        for(int i=0 ; i<n ; i++){
            map<int, int> mp ; 
            for(int j=0;j<n;j++){ 
                //distance =  (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)
                 int distance= ((points[i][0]-points[j][0]) * (points[i][0]-points[j][0]) + 
                               (points[i][1] - points[j][1]) * (points[i][1] - points[j][1]) ) ;
                 mp[distance]++ ; 
                
            }
            for(auto it: mp){
                if(it.second)
                    total = total + it.second * (it.second-1) ; 
            }
        }
        return total ; 
    }
};