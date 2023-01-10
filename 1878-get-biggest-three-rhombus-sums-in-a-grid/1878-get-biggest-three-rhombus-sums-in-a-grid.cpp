class Solution {
public:
    bool isvalid(int i, int j, int n, int m){
        return i>=0 && i<n && j>=0 && j<m;
    }
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        set<int>s;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size(); j++){
                s.insert(grid[i][j]);
            }
        }
        for(int i=1; i<=50; i++){
            for(int j=0; j<grid.size(); j++){
                for(int k=0; k<grid[0].size(); k++){
                    if(isvalid(j-i, k, grid.size(), grid[0].size()) && isvalid(j, k-i, grid.size(), grid[0].size()) && isvalid(j+i, k, grid.size(), grid[0].size()) && isvalid(j, k+i, grid.size(), grid[0].size())){
                        int sum=grid[j-i][k]+grid[j+i][k]+grid[j][k-i]+grid[j][k+i];
                        for(int x=1; x<i; x++){
                            sum+=grid[j-x][k+i-x];
                        }
                        for(int x=1; x<i; x++){
                            sum+=grid[j-x][k-i+x];
                        }
                        for(int x=1; x<i; x++){
                            sum+=grid[j+x][k+i-x];
                        }
                        for(int x=1; x<i; x++){
                            sum+=grid[j+x][k-i+x];
                        }
                        s.insert(sum);
                    }
                }
            }
        }
        vector<int>v;
        for(auto it: s){
            v.push_back(it);
        }
        reverse(v.begin(), v.end());
        vector<int>ans;
        if(v.size()<3){return v;}
        for(int i=0; i<3; i++){ans.push_back(v[i]);}
        return ans;
    }
};
// class Solution {
// public:
//     int n , m ; 
//     bool chk(pair<int, int> a){
//       return (a.first>=0  && a.first < n && a.0second>=0  && a.second < m)  ; 
//     }
//     vector<int> getBiggestThree(vector<vector<int>>& grid) {
//      //creating set for storing the values 
//         set<long, long> s  ;
//         int n = grid.size() ;
//         int m = grid[0].size() ;
//         for (int i=0 ; i < n ; i++){
//             for(int j = 0; j < m ; j++){
//                 s.insert(grid[i][j]) ; 
//             }
//         }
//         for(int l = 0 ; l < 50 ; l++){
//          for (int i=0 ; i < n ; i++){
//             for(int j = 0; j < m ; j++){
//                //inseting corner points 
//              pair<int, int> a = {i-l,j} ;
//              pair<int, int> b = {i,j-l} ;
//              pair<int, int> c = {i+l,j} ;
//              pair<int, int> d = {i,j+l} ;
//              if(chk(a) == false && chk(b) == false && chk(c) == false && chk(d) == false) goto fail ; 
//                 if(chk(a) && chk(b) && chk(c) && chk(d)){
//                     int total ; 
//                     //finding middle points between the two corner points 
//                     for(int k = 0 ; k < l-1 ; k++) total += (long long) grid[i-k][j-l+k];
//                     for(int k = 0 ; k < l-1 ; k++) total += (long long) grid[i-k][j+l-k];
//                     for(int k = 0 ; k < l-1 ; k++) total += (long long) grid[i+k][j+l-k];
//                     for(int k = 0 ; k < l-1 ; k++) total += (long long) grid[i+k][j-l+k];
//                     s.insert(total) ;
//                 }
//             }
//             }
//         }
//         fail: 
//         vector<int> ans  ;
//         for(auto i:  s) ans.push_back(i) ;
//         if(ans.size()<3){
//             reverse(ans.begin() , ans.end());
//               return ans  ; 
//         }
//         vector<int> final  ;
//         final.push_back(ans.back()) ;
//         ans.pop_back() ;
//            final.push_back(ans.back()) ;
//         ans.pop_back() ;
//            final.push_back(ans.back()) ;
//         ans.pop_back() ;
//          return final ;
//         }
      
        
//     }
// };