class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n=prices.size();

        if(n==1)
            return 0;

        //vector<int> buy(n),sell(n);

        int prevBuy=max(-prices[0],-prices[1]);
        int prevSell2=0;
        int prevSell1=max(0,prices[1]-prices[0]);

        for(int i=2;i<n;i++){

            int currBuy=max(prevBuy,prevSell2-prices[i]);
            int currSell=max(prevSell1,prevBuy+prices[i]);

            prevSell2=prevSell1;
            prevSell1=currSell;
            prevBuy=currBuy;
        }

        return prevSell1;
    }
};