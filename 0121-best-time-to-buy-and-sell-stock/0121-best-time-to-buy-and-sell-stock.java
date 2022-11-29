class Solution {
    public int maxProfit(int[] prices) {
        int n = prices.length;
        int ans = 0;
        int m = 100001;
        
        for(int i=0;i<n;i++){
            m = Math.min(m,prices[i]);
            ans = Math.max(ans,(prices[i]-m));
            }
        return ans;
    }
}