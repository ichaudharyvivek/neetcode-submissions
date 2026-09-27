class Solution {
   public:
    // Brute:
    // TC: O(n^2)
    // SC: O(1)
    // int maxProfit(vector<int>& prices) {
    //     int n = prices.size();
    //     int maxi = 0;
    //     for (int i = 0; i < n - 1; i++) {
    //         for (int j = i + 1; j < n; j++) {
    //             maxi = max(maxi, prices[j] - prices[i]);
    //         }
    //     }
    //     return maxi;
    // }

    // Optimized
    // TC: O(n)
    // SC: O(1)
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int maxi = 0;
        for (int i = 1; i < prices.size(); i++) {
            int profit = prices[i] - mini;
            maxi = max(maxi, profit);
            mini = min(mini, prices[i]);
        }
        return maxi;
    }
};