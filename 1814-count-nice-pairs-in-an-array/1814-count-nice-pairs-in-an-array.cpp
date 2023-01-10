
class Solution {
public:
    int rev(int n)   //function to find reverse of a number
    {
        int res=0;
        while(n!=0)
        {
            res=res*10+n%10;
            n/=10;
        }
        return res;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int> um;     //to store the count of given formula
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            int tmp=nums[i]-rev(nums[i]);        //given formula
            um[tmp]++;
            res=(res+um[tmp]-1)%1000000007;      //to count (i,j) pair indirectly
        }
        return res%1000000007;
    }
};
// class Solution {
// public:
//     #define ll long long
//     const int M = 1e9 + 7  ;
//     ll mod(ll n ){
//         return (n%M + M)% M ; 
//     }
//     ll add(ll a, ll b){
//         return mod(mod(a) + mod(b)) ; 
//     }
//         ll mul(ll a, ll b){
//         return mod(mod(a) * mod(b)) ; 
//     }   

    
//     int reverse(int n){
//         int num=0 ; 
//         while(n){
//             int k =  n % 10  ;
//             int num =  num *  10 ; 
//              num = num + k;
//              num = num / 10 ;
            
//         }
//         return num ; 
        
//     }
//     int countNicePairs(vector<int>& nums) {
//         map<ll,ll>mp ;
//         for(auto i: nums) {
//             int k =  i - reverse(i) ;
//             mp[k++] ; 
//         }
//         // ll total = 0 ; 
//         for(auto i : nums){
//           int  total = add(total , (i.second%2==0 ? mul(i.second/2 , i.second-1) : mul(i.second , (i.second-1)/2)) ) ;
//         }
//         return total ; 
//     }
// };