class Solution {
public:
//     int minCostClimbingStairs(vector<int>& cost) {
//         int ans=0;
            // TODO
//         for(int i=0;i<cost.size()-1;i++)
//         {
//             if(cost[i+1]<cost[i])
//                 ans+=cost[i+1];
//             else
//                 ans+=cost[i];
//         }
//         return ans;
//     }
        int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp = cost;
        
        for (int i = 2; i < n; i++) {
            dp[i] += min(dp[i-2], dp[i-1]);
        }
        return min(dp[n-1], dp[n-2]);
    }
    
};