class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans(n);

        for(int i = 0; i < n; i++) {
            int num = i + 1;

            if(num % 3 == 0 && num % 5 == 0) {
                ans[i] = "FizzBuzz";
            }
            else if(num % 3 == 0) {
                ans[i] = "Fizz";
            }
            else if(num % 5 == 0) {
                ans[i] = "Buzz";
            }
            else {
                ans[i] = to_string(num);
            }
        }

        return ans;
    }
};