class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
           
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int diff = INT_MAX;
        int ans = 0;
        
        for(int i = 0;i<n;i++){
            int start = i+1;
            int end = n-1;
            
            while(start < end){
                
                int temp = nums[i]+nums[start]+nums[end];
                if(abs(temp - target)<diff){
                    ans = temp;
                    diff = abs(temp-target);
                }
                 if(temp == target)return temp;
                else if(temp > target) end--;
                else start++;
            }
        }
        
        return ans;
        
    }
};