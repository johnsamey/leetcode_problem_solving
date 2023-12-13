class Solution {
public:
    int maxProfit(vector<int> &prices) {
        int maxprofit = 0, profit = 0;
        int minPrices = INT_MAX;
        for (int p: prices) {
            minPrices = min(minPrices, p);
            profit = abs(p - minPrices);
            maxprofit = max(profit, maxprofit);
        }
        return maxprofit;
    }
};
