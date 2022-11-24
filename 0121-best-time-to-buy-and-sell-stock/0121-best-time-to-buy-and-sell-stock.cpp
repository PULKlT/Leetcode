class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = 0;
        int m = 100001;
        
        for(int i=0;i<n;i++){
            m = min(m,prices[i]);
            ans = max(ans,(prices[i]-m));
            }
        return ans;
    }
};