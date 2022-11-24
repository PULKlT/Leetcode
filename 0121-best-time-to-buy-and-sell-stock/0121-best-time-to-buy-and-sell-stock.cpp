class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int n = prices.size();
        int ans = 0;
        int m = 100001;
        // for(int i=0;i<n-1;i++){
        //     if(prices[i+1]<=prices[i])
        //         continue;
        //     for(int j=i+1;j<n;j++){
        //         ans = max(ans,(prices[j]-prices[i]));
        //     }
        // }
        
        for(int i=0;i<n;i++){
            m = min(m,prices[i]);
            ans = max(ans,(prices[i]-m));
            }
        return ans;
    }
};