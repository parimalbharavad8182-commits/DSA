class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> min_len(n, INT_MAX / 2);
        
        int left = 0, sum = 0;
        int ans = INT_MAX / 2;
        int current_min_len = INT_MAX / 2;

        for (int right = 0; right < n; ++right) {
            sum += arr[right];

            while (sum > target) {
                sum -= arr[left];
                left++;
            }

            if (sum == target) {
                int len = right - left + 1;
                if (left > 0) {
                    ans = min(ans, len + min_len[left - 1]);
                }
                current_min_len = min(current_min_len, len);
            }

            min_len[right] = (right > 0) ? min(min_len[right - 1], current_min_len) : current_min_len;
        }

        return ans >= INT_MAX / 2 ? -1 : ans;
    }
};