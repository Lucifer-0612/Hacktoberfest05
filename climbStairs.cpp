class Solution {
public:
    // Returns the nth Fibonacci number (1-indexed for climbStairs)
    int fibo(int n) {
        if (n <= 1)
            return 1;
        int a = 1, b = 1, c = 0;
        for (int i = 2; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }

    int climbStairs(int n) {
        return fibo(n);
    }
};
