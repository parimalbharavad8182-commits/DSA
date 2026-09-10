class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int min = INT_MAX;
        int ans = 0;

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < min) {
                min = prices[i];
            }
                ans = prices[i]-min;
            if (ans > max) {
                max = ans;
            }
        }  return max;
    }
  
};