class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int minPrice = INT_MAX; // track lowest price
        int maxProfit = 0;      // track best profit

        for (int i = 0; i < n; i++) {
            minPrice = min(minPrice, prices[i]); // update lowest price
            maxProfit =
                max(maxProfit, prices[i] - minPrice); // update max profit
        }

        return maxProfit;
    }
};
