/*
 * @lc app=leetcode.cn id=62 lang=cpp
 *
 * [62] 不同路径
 */
// 20201024 练习动态转义方程式 二维式的Fibonacci数组
// 需要注意的是：练习的时候在二维数组的下标上弄反了 犯了低级错误
// 可以把m、n比作坐标的x、y 这样就不会弄错了
// @lc code=start
class Solution {
public:
    int uniquePaths(int m, int n) {
        if (m == 0 && n == 0) return 0;
        if (m == 0) return 1;
        if (n == 0) return 1;
        vector<vector<int>> metrix(n, vector<int>(m, 1));

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                metrix[i][j] = metrix[i - 1][j] + metrix[i][j - 1];
            }
        }
        return metrix[n-1][m-1];
    }
};
// @lc code=end

