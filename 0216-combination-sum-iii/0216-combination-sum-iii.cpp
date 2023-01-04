class Solution {
public:
    void helper(int ind , int sum , int n ,  vector<vector<int>>&finalans , vector<int>ans , int k ){
        //base case 
        if(sum==n && k==0) 
            finalans.push_back(ans) ; 
        if(sum>n) {
            return ; 
        }
        for(int i =  ind ; i <= 9 ; i++){
            if(i>n){
                break ; 
            }
            ans.push_back(i) ;
            helper(i+1, sum+i, n , finalans, ans ,  k-1) ;
            ans.pop_back() ; 
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> ans; 
         vector<vector<int>> finalans ; 
          helper(1,0,n, finalans , ans , k) ;
        return finalans ;
    }
};