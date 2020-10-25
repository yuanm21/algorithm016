/*
 * @lc app=leetcode.cn id=509 lang=cpp
 *
 * [509] 斐波那契数
 */
// 20201023 Fibonacci数
//          方法1：直接递归 O(logN)
//          方法2：优化递归 存储每个值，然后根据是否已有值来剪枝 O(N)
// @lc code=start
class Solution
{
public:
    int fib(int N) {
        if (N <= 1) {
            return N;
        }

        // 1. 傻递归
        //return fib(N-1) + fib(N-2);

        // 2. 优化递归（带记忆功能 剪枝)
        //vector<int> memo(N, 0);
        //return fibDo(N, memo);

        // 3. 动态递推
        vector<int> dp(N, 1);
        for (size_t i = 2; i < N; i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[N-1];
    }

    int fibDo(int n, vector<int> &memo) {
        if (n <= 1) return n;
        if (memo[n-1] == 0) {
            memo[n-1] = fibDo(n-1, memo) + fibDo(n-2, memo);
        } 
        return memo[n-1];
    }
};
// @lc code=end

