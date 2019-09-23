https://leetcode.com/problems/power-of-three/

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n < 1) return false;
        
        double res = log10(n)/log10(3);
        
        return (floor(res) == ceil(res));
    }
};
