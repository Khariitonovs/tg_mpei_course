https://leetcode.com/problems/powx-n/submissions/

class Solution {
public:
    double myPow(double x, long long int n) {
    double p = 1; 
    if (n < 0) { 
        x = 1.0 / x; 
        n = -n; 
    } 
    while (n > 0) { 
        if (n & 1) 
            p = p * x; 
        n = n >> 1; 
        x = x * x; 
    } 
    return p;  
    }
};
