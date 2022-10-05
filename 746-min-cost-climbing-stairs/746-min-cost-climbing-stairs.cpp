class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        if (!cost.size()) return 0;
		
        int r = 0;
        int l = 0;
        for (int i = cost.size() - 1; i >= 0; i--) {
            cost[i] += min(r, l);
            int tmp = l;
            r = l;
            l = cost[i];
        }
        
        return min(cost[0], cost[1]);
    }
};