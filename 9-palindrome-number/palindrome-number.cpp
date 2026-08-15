class Solution {
public:
    bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        
        // Step 2: Reverse the second half of the number
        // We know we've reached the middle of the number when x <= reversedHalf
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // Step 3: Check for equality
        // If the number has an even number of digits, x == reversedHalf.
        // If it has an odd number of digits, we drop the middle digit using reversedHalf / 10.
        // (e.g., if input is 12321, at the end x = 12 and reversedHalf = 123)
        return x == reversedHalf || x == reversedHalf / 10;    

    }
};