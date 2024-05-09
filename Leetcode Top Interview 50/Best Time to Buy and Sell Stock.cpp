class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int buyPrice = prices[0];
        int profit = 0;

        for(int i=0; i<prices.size(); i++)
        {
            if(prices[i] > buyPrice)
            {
                profit = max(profit, (prices[i] - buyPrice));
            }

            else
            {
                buyPrice = prices[i];
            }
        }
        
        return profit;

    }
};