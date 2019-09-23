https://leetcode.com/problems/factorial-trailing-zeroes/

class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        long div = 5;
         while(n / div > 0)
        {
            count += n / div;
            div *= 5;
        }
        return count;
    }
};
