/*
 * @lc app=leetcode.cn id=191 lang=cpp
 *
 * [191] 位1的个数
 */
// 1 从n的最后一位开始，和1做“与”运算，然后将n右移一位
// 2 利用 n & (n - 1) 来消除n最右边的1
// @lc code=start
class Solution {
public:
    int hammingWeight(uint32_t n)
    {
        /*
        int count = 0;
        while(n != 0)
        {
            if(n & 1) count ++;
            n >>= 1;
        }
        return count;
        */
        int count = 0;
        while(n != 0)
        {
            count ++;
            n = n & (n - 1);
        }
        return count;
    }
};
// @lc code=end