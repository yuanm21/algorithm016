/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    // int climbStairs(int n) {
    //     if (n < 3)
    //     {
    //         return n;
    //     }

    //     return climbStairs(n - 2) + climbStairs(n - 1);
    // }
    int climbStairs(int n) {
        if (n <= 2) {
            return n;
        }

        int pre1 = 1;
        int pre2 = 2;
        int sum = 0;
        while (n > 2)
        {
            sum = pre1 +  pre2;
            pre1 = pre2;
            pre2 = sum;
            n--;
        }
        return sum;
    }
};
// @lc code=end

