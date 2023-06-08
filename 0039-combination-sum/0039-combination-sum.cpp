class Solution {

public:
  void f(vector<int>&arr, int target , int ind , vector<vector<int>>&ans, vector<int>&ds)     {
      //base condition 
      if(ind == arr.size()){
          if(target==0) 
{              ans.push_back(ds) ;}
          return ; 
      }
      
      //recursion call 
      //using pick and not pick method 
      
      //pick 
      
      if(arr[ind]<=target){
          ds.push_back(arr[ind]) ;
          f(arr , target- arr[ind] , ind  , ans , ds )  ;
          ds.pop_back() ;       
      }
      f(arr , target, ind+1  , ans , ds )  ;
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans ; 
        vector<int> ds  ;
        f(candidates , target , 0 ,  ans , ds)  ;
        return ans ; 
    }
};