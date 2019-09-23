https://leetcode.com/problems/fibonacci-number/

class Solution {
public:
    int fib(int N) {
        if(N < 2) return N; 
        else if(N == 2 ) return 1; 
        int x = 1 , y = 1, num = 0; 
         for(int i = 2; i < N; i++){
            num = x + y; 
             x = y; 
             y = num; 
             
         }
        return num; 
        
    }
};
